// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTROTAPROVIDERDELEGATE_H
#define HMMTROTAPROVIDERDELEGATE_H

@class NSString;
@protocol HMFLogging, MTROTAProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMMTRAccessoryServerBrowser.h"

@interface HMMTROTAProviderDelegate : NSObject <HMFLogging, MTROTAProviderDelegate>



@property (weak, nonatomic) HMMTRAccessoryServerBrowser *browser; // ivar: _browser
@property (retain) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)generateUpdateToken;
-(id)initWithQueue:(id)arg0 browser:(id)arg1 ;
-(void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)arg0 completionHandler:(id)arg1 ;
-(void)_refreshHAPFirmwareRevisionForAccessoryServer:(id)arg0 retryCount:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)applyUpdateRequestTimerExpiredForAccessoryServer:(id)arg0 ;
-(void)applyUpdateTimerExpiredForAccessoryServer:(id)arg0 softwareVersion:(id)arg1 didTimeout:(id)arg2 ;
-(void)handleApplyUpdateRequestForNodeID:(id)arg0 controller:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)handleBDXQueryForNodeID:(id)arg0 controller:(id)arg1 blockSize:(id)arg2 blockIndex:(id)arg3 bytesToSkip:(id)arg4 completion:(id)arg5 ;
-(void)handleBDXTransferSessionBeginForNodeID:(id)arg0 controller:(id)arg1 fileDesignator:(id)arg2 offset:(id)arg3 completion:(id)arg4 ;
-(void)handleBDXTransferSessionEndForNodeID:(id)arg0 controller:(id)arg1 error:(id)arg2 ;
-(void)handleNotifyUpdateAppliedForNodeID:(id)arg0 controller:(id)arg1 params:(id)arg2 completion:(id)arg3 ;
-(void)handleQueryImageForNodeID:(id)arg0 controller:(id)arg1 params:(id)arg2 completion:(id)arg3 ;


@end


#endif