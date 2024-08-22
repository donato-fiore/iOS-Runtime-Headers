// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCALMOSTTHERECONFIGURATION_H
#define FCCALMOSTTHERECONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FCCTimeOfDayRule.h"

@interface FCCAlmostThereConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *coalescingRules; // ivar: _coalescingRules
@property (readonly, nonatomic) CGFloat goalBufferPercentage; // ivar: _goalBufferPercentage
@property (readonly, nonatomic) NSInteger goalType; // ivar: _goalType
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat minimumPercentageComplete; // ivar: _minimumPercentageComplete
@property (readonly, nonatomic) FCCTimeOfDayRule *timeOfDayRule; // ivar: _timeOfDayRule


-(id)description;
-(id)initWithIdentifier:(id)arg0 minimumPercentageComplete:(CGFloat)arg1 goalBufferPercentage:(CGFloat)arg2 coalescingRules:(id)arg3 timeOfDayRule:(id)arg4 goalType:(NSInteger)arg5 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif