// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCATYPICALDAYCONFIGURATION_H
#define FCCATYPICALDAYCONFIGURATION_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "FCCPercentageOfDayRule.h"

@interface FCCAtypicalDayConfiguration : NSObject

@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes; // ivar: _allowedGoalTypes
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat minimumAheadPercentage; // ivar: _minimumAheadPercentage
@property (readonly, nonatomic) CGFloat minimumBehindPercentage; // ivar: _minimumBehindPercentage
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule; // ivar: _percentageOfDayRule


-(id)description;
-(id)initWithIdentifier:(id)arg0 minimumAheadPercentage:(CGFloat)arg1 minimumBehindPercentage:(CGFloat)arg2 percentageOfDayRule:(id)arg3 allowedGoalTypes:(id)arg4 ;
-(id)initWithProtobuf:(id)arg0 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)protobuf;
-(id)transportData;


@end


#endif