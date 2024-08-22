// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDCLIPSESSION_H
#define ASDCLIPSESSION_H

@class NSString, NSUUID;
@protocol ASDClipSessionChannel, ASDClipServiceBroker, OS_dispatch_queue, ASDClipSessionDelegate;

#import <Foundation/Foundation.h>

#import "ASDClipRequest.h"

@interface ASDClipSession : NSObject <ASDClipSessionChannel>

 {
    id<ASDClipServiceBroker> *_broker;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ASDClipRequest *_request;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ASDClipSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueID;


-(id)initWithRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 usingBroker:(id)arg2 ;
-(void)cancelInstallWithCompletionHandler:(id)arg0 ;
-(void)channelNotifyDidComplete;
-(void)channelNotifyDidFailWithError:(id)arg0 ;
-(void)channelNotifyDidInstallPlaceholder;
-(void)channelNotifyDidProgress:(CGFloat)arg0 ;
-(void)channelStateDidClose;
-(void)channelStateDidOpen;
-(void)continueInstallWithCompletionHandler:(id)arg0 ;
-(void)downloadAndInstallWithCompletionHandler:(id)arg0 ;
-(void)installPlaceholderWithCompletionHandler:(id)arg0 ;
-(void)startDownloadWithCompletionHandler:(id)arg0 ;


@end


#endif