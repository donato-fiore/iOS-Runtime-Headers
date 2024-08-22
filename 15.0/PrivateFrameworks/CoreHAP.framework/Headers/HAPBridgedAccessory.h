// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPBRIDGEDACCESSORY_H
#define HAPBRIDGEDACCESSORY_H

@class NSString;
@protocol HAPAccessoryServerInternalDelegate;


#import "HAPAccessory.h"
#import "HAPCharacteristic.h"

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HAPCharacteristic *reachabilityCharacteristic; // ivar: _reachabilityCharacteristic
@property (readonly) Class superclass;


-(BOOL)__isReachable;
-(BOOL)__parseBridgeService:(id)arg0 ;
-(BOOL)__parseServices;
-(BOOL)isPrimary;
-(BOOL)mergeObject:(id)arg0 ;
-(BOOL)mergeWithAccessory:(id)arg0 ;
-(BOOL)shouldMergeObject:(id)arg0 ;
-(id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg0 ;
-(id)initWithServer:(id)arg0 instanceID:(id)arg1 parsedServices:(id)arg2 ;
-(id)shortDescription;
-(void)accessoryServer:(id)arg0 didUpdateValueForCharacteristic:(id)arg1 ;
-(void)setReachable:(BOOL)arg0 ;


@end


#endif