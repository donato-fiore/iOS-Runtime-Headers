// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCALENDARRICHCOMPLICATIONCONTENTVIEW_H
#define NTKCALENDARRICHCOMPLICATIONCONTENTVIEW_H

@class UIView, NSArray, CLKDevice, UIColor;


#import "NTKColoringLabel.h"
#import "NTKPillView.h"

@interface NTKCalendarRichComplicationContentView : UIView

@property (retain, nonatomic) NTKColoringLabel *body2Label; // ivar: _body2Label
@property (retain, nonatomic) NTKColoringLabel *bodyLabel; // ivar: _bodyLabel
@property (retain, nonatomic) NSArray *conflictEventsPill2AlignmentConstraints; // ivar: _conflictEventsPill2AlignmentConstraints
@property (retain, nonatomic) NSArray *conflictEventsPillAlignmentConstraints; // ivar: _conflictEventsPillAlignmentConstraints
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (nonatomic) NSUInteger eventCount; // ivar: _eventCount
@property (retain, nonatomic) UIColor *firstEventColor; // ivar: _firstEventColor
@property (nonatomic) BOOL hasConflicts; // ivar: _hasConflicts
@property (retain, nonatomic) NTKColoringLabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) NSArray *noPillConstraints; // ivar: _noPillConstraints
@property (retain, nonatomic) NSArray *otherEventColors; // ivar: _otherEventColors
@property (retain, nonatomic) NSArray *pillAlignedToBody1BottomConstraints; // ivar: _pillAlignedToBody1BottomConstraints
@property (retain, nonatomic) NSArray *pillAlignedToBody2BottomConstraints; // ivar: _pillAlignedToBody2BottomConstraints
@property (retain, nonatomic) NTKPillView *verticalPill; // ivar: _verticalPill
@property (retain, nonatomic) NTKPillView *verticalPill2; // ivar: _verticalPill2


-(id)initForDevice:(id)arg0 ;
-(void)updateLayout;


@end


#endif