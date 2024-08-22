// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTASKINGLIMITINGPARAMETERS_H
#define DRSTASKINGLIMITINGPARAMETERS_H


#import <Foundation/Foundation.h>


@interface DRSTaskingLimitingParameters : NSObject

@property (readonly, nonatomic) NSUInteger acceptedConfigCountCap; // ivar: _acceptedConfigCountCap
@property (readonly, nonatomic) CGFloat perTeamTaskingHysteresisInterval;
@property (readonly, nonatomic) CGFloat taskingHysteresisInterval; // ivar: _taskingHysteresisInterval


+(id)_customerParameters;
+(id)_disabledParameters;
+(id)_internalParameters;
+(id)_seedParameters;
+(id)defaultDeviceParameters;
+(id)parametersForPlatform:(unsigned char)arg0 isInternal:(BOOL)arg1 isSeed:(BOOL)arg2 isCarrier:(BOOL)arg3 taskingIsEnabled:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithAcceptConfigCountCap:(NSUInteger)arg0 taskingHysteresisInterval:(CGFloat)arg1 ;


@end


#endif