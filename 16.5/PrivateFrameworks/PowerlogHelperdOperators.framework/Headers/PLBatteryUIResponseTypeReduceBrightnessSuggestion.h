// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEREDUCEBRIGHTNESSSUGGESTION_H
#define PLBATTERYUIRESPONSETYPEREDUCEBRIGHTNESSSUGGESTION_H

@class NSDictionary, NSString;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeReduceBrightnessSuggestion : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSDictionary *batteryBreakdown_Last24hrs; // ivar: _batteryBreakdown_Last24hrs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat energyPercent; // ivar: _energyPercent
@property (readonly) NSUInteger hash;
@property BOOL isALSCurveHigherThanDefault; // ivar: _isALSCurveHigherThanDefault
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