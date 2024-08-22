// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APRKCONTENTKEYHELPER_H
#define APRKCONTENTKEYHELPER_H

@class AVContentKeySession, NSMutableDictionary, NSData, NSString;
@protocol AVContentKeySessionDelegate, OS_dispatch_queue, APRKContentKeyHelperDelegate;

#import <Foundation/Foundation.h>


@interface APRKContentKeyHelper : NSObject <AVContentKeySessionDelegate>

 {
    NSObject<OS_dispatch_queue> *_contentKeySessionQueue;
    AVContentKeySession *_contentKeySession;
    NSMutableDictionary *_activeContentKeyRequests;
    NSData *_appIDData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APRKContentKeyHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forwardsFPSSecureStopData; // ivar: _forwardsFPSSecureStopData
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isHandlingContentKeyRequestWithURLString:(id)arg0 ;
-(id)init;
-(void)_performContentKeyRequest:(id)arg0 isRenewalRequest:(BOOL)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideContentKeyRequest:(id)arg1 ;
-(void)contentKeySession:(id)arg0 didProvideRenewingContentKeyRequest:(id)arg1 ;
-(void)contentKeySessionDidGenerateExpiredSessionReport:(id)arg0 ;
-(void)forgetAllActiveContentKeyRequests;
-(void)processStreamingKeyRequestWithDictionary:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)processUnhandledURLResponseWithDictionary:(id)arg0 error:(*id)arg1 ;
-(void)registerAVURLAsset:(id)arg0 ;
-(void)unregisterAVURLAsset:(id)arg0 ;


@end


#endif