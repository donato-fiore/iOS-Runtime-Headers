// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSPAIREDDEVICEVALIDATION_H
#define TPSPAIREDDEVICEVALIDATION_H

@class NSArray;
@protocol OS_dispatch_queue;


#import "TPSInclusivityValidation.h"

@interface TPSPairedDeviceValidation : TPSInclusivityValidation

@property (copy, nonatomic) NSArray *cachedDevices; // ivar: _cachedDevices
@property (copy, nonatomic) NSArray *cachedPeers; // ivar: _cachedPeers
@property (readonly, nonatomic) NSArray *excludeDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // ivar: _syncQueue
@property (readonly, nonatomic) NSArray *targetDevices;


-(id)_bluetoothValidationForProductID:(unsigned int)arg0 deviceType:(NSInteger)arg1 ;
-(id)_validationForDeviceNumber:(NSInteger)arg0 ;
-(id)_validationsForDevices:(id)arg0 ;
-(id)completionQueue;
-(id)initWithTargetDevices:(id)arg0 excludeDevices:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif