// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCGOALCOMPLETIONCONTENT_H
#define FCCGOALCOMPLETIONCONTENT_H

@class NSArray, NSString;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCGoalCompletionContent : NSObject <FCCDataSerializable>



@property (readonly, nonatomic) NSInteger activitySummaryIndex; // ivar: _activitySummaryIndex
@property (readonly, copy, nonatomic) NSArray *completedGoalTypes; // ivar: _completedGoalTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


-(id)initWithActivitySummaryIndex:(NSInteger)arg0 identifier:(id)arg1 completedGoalTypes:(id)arg2 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)transportData;


@end


#endif