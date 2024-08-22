// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFIRRIGATIONVALVESERVICESTATE_H
#define HFIRRIGATIONVALVESERVICESTATE_H



#import "HFServiceState.h"

@interface HFIrrigationValveServiceState : HFServiceState

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)_typeForSystemActiveState:(BOOL)arg0 usageState:(NSInteger)arg1 ;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
-(BOOL)isTransitioning;
-(NSInteger)primaryState;
-(NSInteger)priority;
-(id)initWithBatchReadResponse:(id)arg0 ;
-(id)stateTypeIdentifier;


@end


#endif