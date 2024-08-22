// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEAUTOBRIGHTNESSSUGGESTION_H
#define PLBATTERYUIRESPONSETYPEAUTOBRIGHTNESSSUGGESTION_H

@class NSArray, NSString;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeAutoBrightnessSuggestion : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSArray *alsPowerSavedEntries; // ivar: _alsPowerSavedEntries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat energyPercent; // ivar: _energyPercent
@property BOOL hasALSPowerSaved; // ivar: _hasALSPowerSaved
@property (readonly) NSUInteger hash;
@property BOOL isALSEnabled; // ivar: _isALSEnabled
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