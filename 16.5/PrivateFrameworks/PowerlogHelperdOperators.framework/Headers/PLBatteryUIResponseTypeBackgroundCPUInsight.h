// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEBACKGROUNDCPUINSIGHT_H
#define PLBATTERYUIRESPONSETYPEBACKGROUNDCPUINSIGHT_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeBackgroundCPUInsight : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSMutableArray *batteryBreakdown_Last10Days; // ivar: _batteryBreakdown_Last10Days
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *perAppUsage; // ivar: _perAppUsage
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