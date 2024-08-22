// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTSWITCHERSEGMENTCONTROL_H
#define UIINPUTSWITCHERSEGMENTCONTROL_H

@class NSArray;


#import "UIControl.h"
#import "UIStackView.h"

@interface UIInputSwitcherSegmentControl : UIControl

@property (readonly, nonatomic) NSUInteger numberOfSegments;
@property (retain, nonatomic) NSArray *segmentImages; // ivar: _segmentImages
@property (copy, nonatomic) NSArray *segmentTitles; // ivar: _segmentTitles
@property (nonatomic) NSInteger selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (nonatomic) BOOL usesDarkTheme; // ivar: _usesDarkTheme


-(BOOL)shouldTrack;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_populateSegmentViewsWithCount:(NSUInteger)arg0 ;
-(void)_removeAllSegmentViews;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateSelectionWithPoint:(struct CGPoint )arg0 ;


@end


#endif