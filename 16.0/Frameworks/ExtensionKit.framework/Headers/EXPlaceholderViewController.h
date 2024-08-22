// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPLACEHOLDERVIEWCONTROLLER_H
#define EXPLACEHOLDERVIEWCONTROLLER_H

@class UIViewController, UIActivityIndicatorView, UIImageView, NSString, NSTimer;
@protocol _EXHostViewControllerDelegate;



@interface EXPlaceholderViewController : UIViewController <_EXHostViewControllerDelegate>



@property (retain) UIActivityIndicatorView *activityView; // ivar: _activityView
@property (retain) UIImageView *completeIcon; // ivar: _completeIcon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (weak) NSTimer *timer; // ivar: _timer


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)hostViewController:(id)arg0 didBeginHosting:(id)arg1 ;
-(void)hostViewController:(id)arg0 didEndHosting:(id)arg1 error:(id)arg2 ;
-(void)hostViewController:(id)arg0 didPrepareToHost:(id)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif