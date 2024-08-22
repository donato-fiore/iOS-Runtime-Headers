// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPEAUTOLOCKSUGGESTION_H
#define PLBATTERYUIRESPONSETYPEAUTOLOCKSUGGESTION_H

@class NSNumber, NSDictionary, NSString;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeAutoLockSuggestion : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSNumber *autoLockTime; // ivar: _autoLockTime
@property (retain) NSDictionary *batteryBreakdown_Last24hrs; // ivar: _batteryBreakdown_Last24hrs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat energyPercent; // ivar: _energyPercent
@property (readonly) NSUInteger hash;
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property BOOL suggest; // ivar: _suggest
@property (readonly) Class superclass;


-(id)dependencies;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif