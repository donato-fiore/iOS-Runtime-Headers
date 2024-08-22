// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMHAPSETUPOPERATION_H
#define HMDDATASTREAMHAPSETUPOPERATION_H

@protocol HMDDataStreamSetupOperationMTU;


#import "HMDDataStreamSetupOperation.h"

@interface HMDDataStreamHAPSetupOperation : HMDDataStreamSetupOperation <HMDDataStreamSetupOperationMTU>



@property (readonly, nonatomic) NSUInteger maxControllerTransportMTU; // ivar: _maxControllerTransportMTU
@property (nonatomic) NSInteger sessionIdentifier; // ivar: _sessionIdentifier


+(id)logCategory;
-(id)initWithAccessory:(id)arg0 queue:(id)arg1 logIdentifier:(id)arg2 transferManagementService:(id)arg3 maxControllerTransportMTU:(NSUInteger)arg4 setupOperationReadRequired:(BOOL)arg5 ;
-(void)_readRequiredTransportCharacteristics;
-(void)processTransportSetupResponse:(id)arg0 ;
-(void)startSetup;


@end


#endif