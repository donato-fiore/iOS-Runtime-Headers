// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDEBUGGINGZOOMVIEWCONTROLLER_H
#define UIDEBUGGINGZOOMVIEWCONTROLLER_H

@protocol UIDebuggingZoomDelegate, UIDebuggingInformationViewController, OS_dispatch_group, OS_dispatch_queue;


#import "UIViewController.h"
#import "UISegmentedControl.h"
#import "UILabel.h"
#import "UIView.h"
#import "UIDebuggingZoomLineView.h"
#import "UIDebuggingZoomLoupeView.h"
#import "UIPanGestureRecognizer.h"

@interface UIDebuggingZoomViewController : UIViewController <UIDebuggingZoomDelegate, UIDebuggingInformationViewController>



@property (nonatomic) NSUInteger currentDirection; // ivar: _currentDirection
@property (retain, nonatomic) UISegmentedControl *directionSegmentedControl; // ivar: _directionSegmentedControl
@property (retain, nonatomic) UILabel *distanceLabel; // ivar: _distanceLabel
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (nonatomic) *CGImage image; // ivar: _image
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (retain, nonatomic) UIView *lastViewSeen; // ivar: _lastViewSeen
@property (retain, nonatomic) UIDebuggingZoomLineView *lineView; // ivar: _lineView
@property (retain, nonatomic) UIDebuggingZoomLoupeView *loupe; // ivar: _loupe
@property (retain, nonatomic) UIPanGestureRecognizer *pan; // ivar: _pan
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL useViewForEdges; // ivar: _useViewForEdges


-(id)drawLinesAtPoint:(struct CGPoint )arg0 ;
-(id)drawViewLinesAtPoint:(struct CGPoint )arg0 forView:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGImage *)newCaptureSnapshotAtRect:(struct CGRect )arg0 window:(id)arg1 ;
-(void)dealloc;
-(void)toggleDirection:(id)arg0 ;
-(void)toggleMeasuring:(id)arg0 ;
-(void)toggleMode:(id)arg0 ;
-(void)updateGesture:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif