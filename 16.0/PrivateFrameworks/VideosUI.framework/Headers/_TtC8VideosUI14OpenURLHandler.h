// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI14OPENURLHANDLER_H
#define _TTC8VIDEOSUI14OPENURLHANDLER_H

@class NSURL;
@protocol VUIOpenURLHandling;

#import <Foundation/Foundation.h>


@interface _TtC8VideosUI14OpenURLHandler : NSObject <VUIOpenURLHandling>

 {
    ? deferredOpenURL;
    ? _isFinished;
    ? isFinishedLock;
    ? _isLoadingSharedWatchURL;
    ? isLoadingSharedWatchURLLock;
    ? deferredOpenURLCompletion;
    ? amsURLParser;
    ? deferredAMSDynamicURLCompletion;
    ? offerURLString;
    ? contextData;
    ? purchaseOrLinkingAdamID;
    ? subscriptionChannelTitle;
    ? subscriptionChannelLink;
    ? currentAMSDynamicViewController;
}


@property (nonatomic, copy) NSURL *deferredOpenURL;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isLoadingSharedWatchURL;
@property (nonatomic) BOOL openedByDeeplink; // ivar: openedByDeeplink


-(BOOL)isRedeemURL:(id)arg0 ;
-(id)init;
-(id)queryParameterStringfromURL:(id)arg0 parameter:(id)arg1 ;
-(void)handleDeferredURLWithAppContext:(id)arg0 ;
-(void)openSharedWatchURL:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)parseURL:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)processDeeplink:(id)arg0 appContext:(id)arg1 completion:(id)arg2 ;
-(void)processEngagementResult:(id)arg0 error:(id)arg1 ;
-(void)processEntityWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)processNonDeeplinkURL:(id)arg0 contextData:(id)arg1 completion:(id)arg2 ;
-(void)saveDeferredURL:(id)arg0 completion:(id)arg1 ;


@end


#endif