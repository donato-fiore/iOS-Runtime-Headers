// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPELASTCHARGELEVEL_H
#define PLBATTERYUIRESPONSETYPELASTCHARGELEVEL_H

@class NSString, NSNumber, NSDictionary;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeLastChargeLevel : NSObject <PLBatteryUIResponseProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSNumber *lastChargeTimestamp; // ivar: _lastChargeTimestamp
@property (retain) NSNumber *lastChargeValue; // ivar: _lastChargeValue
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSDictionary *resultDictionary; // ivar: _resultDictionary
@property (readonly) Class superclass;


-(id)dependencies;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif