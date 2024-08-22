// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFFAUCETVALVESERVICESTATE_H
#define HFFAUCETVALVESERVICESTATE_H



#import "HFServiceState.h"

@interface HFFaucetValveServiceState : HFServiceState

@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(NSUInteger)_typeForSystemActiveState:(BOOL)arg0 heaterCoolerActiveState:(id)arg1 usageState:(NSInteger)arg2 currentHeaterCoolerState:(id)arg3 ;
+(id)optionalCharacteristicTypes;
+(id)requiredCharacteristicTypes;
+(id)stateClassIdentifier;
-(BOOL)isTransitioning;
-(NSInteger)primaryState;
-(NSInteger)priority;
-(id)initWithBatchReadResponse:(id)arg0 ;
-(id)stateTypeIdentifier;


@end


#endif