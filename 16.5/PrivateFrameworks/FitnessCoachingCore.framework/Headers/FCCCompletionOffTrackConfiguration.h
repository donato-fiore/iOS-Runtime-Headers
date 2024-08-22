// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCCCOMPLETIONOFFTRACKCONFIGURATION_H
#define FCCCOMPLETIONOFFTRACKCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FCCPercentageOfDayRule.h"

@interface FCCCompletionOffTrackConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes; // ivar: _allowedGoalTypes
@property (readonly, copy, nonatomic) NSArray *coalescingRules; // ivar: _coalescingRules
@property (readonly, nonatomic) CGFloat goalBufferPercentage; // ivar: _goalBufferPercentage
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule; // ivar: _percentageOfDayRule


-(id)description;
-(id)initWithIdentifier:(id)arg0 goalBufferPercentage:(CGFloat)arg1 coalescingRules:(id)arg2 percentageOfDayRule:(id)arg3 allowedGoalTypes:(id)arg4 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif