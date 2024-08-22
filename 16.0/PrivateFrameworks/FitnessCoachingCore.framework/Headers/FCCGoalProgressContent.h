// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCGOALPROGRESSCONTENT_H
#define FCCGOALPROGRESSCONTENT_H

@class NSString, NSArray;
@protocol FCCDataSerializable;

#import <Foundation/Foundation.h>


@interface FCCGoalProgressContent : NSObject <FCCDataSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly, nonatomic) CGFloat expectedGoalValue; // ivar: _expectedGoalValue
@property (readonly, nonatomic) NSInteger goalTypeToHighlight; // ivar: _goalTypeToHighlight
@property (readonly, copy, nonatomic) NSArray *goalTypesToDisplay; // ivar: _goalTypesToDisplay
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithEventIdentifier:(id)arg0 goalTypesToDisplay:(id)arg1 goalTypeToHighlight:(NSInteger)arg2 expectedGoalValue:(CGFloat)arg3 ;
-(id)initWithTransportData:(id)arg0 ;
-(id)transportData;


@end


#endif