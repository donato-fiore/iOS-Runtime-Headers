// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLBATTERYUIRESPONSETYPEUSAGETIMES_H
#define PLBATTERYUIRESPONSETYPEUSAGETIMES_H

@class NSArray, NSString, NSDate, NSDictionary;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeUsageTimes : NSObject <PLBatteryUIResponseProtocol>



@property (retain) NSArray *aggregateEntries; // ivar: _aggregateEntries
@property CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSDictionary *resultDictionary; // ivar: _resultDictionary
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;


-(id)entriesInRange:(struct _PLTimeIntervalRange )arg0 fromEntries:(id)arg1 ;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif