// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBATTERYUIRESPONSETYPETIMEUSAGEBREAKDOWN_H
#define PLBATTERYUIRESPONSETYPETIMEUSAGEBREAKDOWN_H

@class NSString, NSDictionary;
@protocol PLBatteryUIResponseType;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeTimeUsageBreakdown : NSObject <PLBatteryUIResponseType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSDictionary *resultDictionary; // ivar: _resultDictionary
@property (readonly) Class superclass;


-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif