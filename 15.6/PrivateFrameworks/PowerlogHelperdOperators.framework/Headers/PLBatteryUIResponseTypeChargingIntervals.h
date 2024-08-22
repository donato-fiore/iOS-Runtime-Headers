// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLBATTERYUIRESPONSETYPECHARGINGINTERVALS_H
#define PLBATTERYUIRESPONSETYPECHARGINGINTERVALS_H

@class NSArray, NSString, NSDate, PLEntry;
@protocol PLBatteryUIResponseType;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeChargingIntervals : NSObject <PLBatteryUIResponseType>



@property (retain) NSArray *battEntries; // ivar: _battEntries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (retain) PLEntry *lastBattEntry; // ivar: _lastBattEntry
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSArray *resultArray; // ivar: _resultArray
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;


-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif