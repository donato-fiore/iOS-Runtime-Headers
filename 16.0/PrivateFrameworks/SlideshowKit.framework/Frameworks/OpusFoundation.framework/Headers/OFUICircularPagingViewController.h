// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OFUICIRCULARPAGINGVIEWCONTROLLER_H
#define OFUICIRCULARPAGINGVIEWCONTROLLER_H

@class NSString;
@protocol OFUICircularPagingViewDelegate;


#import "OFUIViewController.h"
#import "OFUICircularPagingView.h"

@interface OFUICircularPagingViewController : OFUIViewController <OFUICircularPagingViewDelegate>



@property (retain, nonatomic) OFUICircularPagingView *circularPagingView; // ivar: _circularPagingView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)circularPagingViewDidMoveBackward:(id)arg0 ;
-(void)circularPagingViewDidMoveForward:(id)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillUnload;
-(void)willAnimateRotationToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)willRotateToInterfaceOrientation:(NSInteger)arg0 duration:(CGFloat)arg1 ;


@end


#endif