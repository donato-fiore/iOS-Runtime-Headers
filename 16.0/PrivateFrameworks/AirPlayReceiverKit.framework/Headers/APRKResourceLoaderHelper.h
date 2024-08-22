// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APRKRESOURCELOADERHELPER_H
#define APRKRESOURCELOADERHELPER_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue, APRKResourceLoaderHelperDelegate;

#import <Foundation/Foundation.h>


@interface APRKResourceLoaderHelper : NSObject <AVAssetResourceLoaderDelegate>

 {
    NSMutableDictionary *_activeResourceLoadingRequests;
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;
    NSDictionary *_headersDictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APRKResourceLoaderHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)resourceLoader:(id)arg0 shouldWaitForLoadingOfRequestedResource:(id)arg1 ;
-(BOOL)resourceLoader:(id)arg0 shouldWaitForResponseToAuthenticationChallenge:(id)arg1 ;
-(id)init;
-(void)forgetAllActiveResourceLoadingRequests;
-(void)processUnhandledURLResponseWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)registerAVURLAsset:(id)arg0 ;
-(void)resourceLoader:(id)arg0 didCancelAuthenticationChallenge:(id)arg1 ;
-(void)resourceLoader:(id)arg0 didCancelLoadingRequest:(id)arg1 ;
-(void)unregisterAVURLAsset:(id)arg0 ;


@end


#endif