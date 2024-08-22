// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACCESSIBILITYLARGETEXTSEGMENTEDVIEWCONTROLLER_H
#define UIACCESSIBILITYLARGETEXTSEGMENTEDVIEWCONTROLLER_H

@class NSMutableArray, NSArray;


#import "UIViewController.h"
#import "UIScrollView.h"
#import "UISegment.h"
#import "UISegmentedControl.h"

@interface UIAccessibilityLargeTextSegmentedViewController : UIViewController

@property (retain, nonatomic) UIScrollView *mainScrollView; // ivar: _mainScrollView
@property (retain, nonatomic) UISegment *originalSelectedSegment; // ivar: _originalSelectedSegment
@property (retain, nonatomic) NSMutableArray *segmentButtons; // ivar: _segmentButtons
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) NSArray *segments; // ivar: _segments


-(BOOL)_canShowWhileLocked;
-(id)initWithSegmentedControl:(id)arg0 segments:(id)arg1 delegate:(id)arg2 ;
-(id)segmentFromSegment:(id)arg0 ;
-(void)_configureSegmentViews;
-(void)_orientationChanged:(id)arg0 ;
-(void)buttonPress:(id)arg0 ;
-(void)buttonTouchDown:(id)arg0 ;
-(void)buttonTouchUp:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif