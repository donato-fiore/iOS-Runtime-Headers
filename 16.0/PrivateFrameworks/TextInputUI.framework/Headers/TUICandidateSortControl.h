// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUICANDIDATESORTCONTROL_H
#define TUICANDIDATESORTCONTROL_H

@class UIControl, UISegmentedControl, NSArray;
@protocol TUICandidateViewStyle;



@interface TUICandidateSortControl : UIControl

@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (nonatomic) NSInteger selectedIndex;
@property (retain, nonatomic) NSObject<TUICandidateViewStyle> *style; // ivar: _style
@property (copy, nonatomic) NSArray *titles; // ivar: _titles


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)handleValueChanged;
-(void)layoutSubviews;


@end


#endif