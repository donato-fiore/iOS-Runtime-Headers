// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVIEWCONTROLLER_H
#define CKVIEWCONTROLLER_H

@class UIViewController;



@interface CKViewController : UIViewController

@property (nonatomic) BOOL appeared; // ivar: _appeared
@property (nonatomic) BOOL appearing; // ivar: _appearing
@property (nonatomic) BOOL deferredAppeared; // ivar: _deferredAppeared
@property (nonatomic) BOOL dissapearing; // ivar: _dissapearing


-(void)childViewControllersPerform:(SEL)arg0 ;
-(void)parentControllerDidBecomeActive;
-(void)parentControllerDidResume:(BOOL)arg0 animating:(BOOL)arg1 ;
-(void)performResumeDeferredSetup;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)significantTimeChange;
-(void)systemApplicationWillEnterForeground;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidAppearDeferredSetup;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif