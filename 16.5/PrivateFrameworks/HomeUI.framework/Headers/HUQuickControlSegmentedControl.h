// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLSEGMENTEDCONTROL_H
#define HUQUICKCONTROLSEGMENTEDCONTROL_H

@class UIView, NSString, UILongPressGestureRecognizer, UIStackView, NSArray, NSNumber;
@protocol HUQuickControlAuxiliaryView;



@interface HUQuickControlSegmentedControl : UIView <HUQuickControlAuxiliaryView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (readonly, nonatomic) BOOL hasCenteredContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *segmentStackView; // ivar: _segmentStackView
@property (retain, nonatomic) NSArray *segmentViews; // ivar: _segmentViews
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments
@property (retain, nonatomic) NSNumber *selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (copy, nonatomic) id *selectionChangeHandler; // ivar: _selectionChangeHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *trackingSegmentIndex; // ivar: _trackingSegmentIndex


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)preferVerticalLayout;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithSegments:(id)arg0 ;
-(void)_handleGesture:(id)arg0 ;
-(void)_setupConstraints;
-(void)_updateSegmentSelectionStateAnimated:(BOOL)arg0 ;
-(void)_updateSegmentViewsForUILayoutDirection;
-(void)ensureCorrectHeaderViewOrientation;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif