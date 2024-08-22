// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFUIPAGINGVIEWCONTROLLER_H
#define OFUIPAGINGVIEWCONTROLLER_H

@class NSString;
@protocol OFUIPagingViewDelegate;


#import "OFUIViewController.h"
#import "OFUIPagingView.h"

@interface OFUIPagingViewController : OFUIViewController <OFUIPagingViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) OFUIPagingView *pagingView; // ivar: _pagingView
@property (readonly) Class superclass;


-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)numberOfPagesInPagingView:(id)arg0 ;
-(id)viewForPageInPagingView:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)dealloc;
-(void)didMoveToParentViewController:(id)arg0 ;
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