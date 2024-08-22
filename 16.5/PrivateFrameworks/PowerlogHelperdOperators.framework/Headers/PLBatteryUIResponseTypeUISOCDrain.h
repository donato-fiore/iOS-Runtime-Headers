// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLBATTERYUIRESPONSETYPEUISOCDRAIN_H
#define PLBATTERYUIRESPONSETYPEUISOCDRAIN_H

@class NSString, NSDate, NSArray;
@protocol PLBatteryUIResponseProtocol;

#import <Foundation/Foundation.h>

#import "PLBatteryUIResponderService.h"

@interface PLBatteryUIResponseTypeUISOCDrain : NSObject <PLBatteryUIResponseProtocol>



@property CGFloat bucketSize; // ivar: _bucketSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSDate *end; // ivar: _end
@property (readonly) NSUInteger hash;
@property (retain) PLBatteryUIResponderService *responderService; // ivar: _responderService
@property (retain) NSArray *resultArray; // ivar: _resultArray
@property (retain) NSDate *start; // ivar: _start
@property (readonly) Class superclass;
@property (retain) NSArray *uiLevelDrainEntries; // ivar: _uiLevelDrainEntries


-(id)entriesInRange:(struct _PLTimeIntervalRange )arg0 fromEntries:(id)arg1 ;
-(id)result;
-(void)coalesce;
-(void)configure:(id)arg0 ;
-(void)run;


@end


#endif