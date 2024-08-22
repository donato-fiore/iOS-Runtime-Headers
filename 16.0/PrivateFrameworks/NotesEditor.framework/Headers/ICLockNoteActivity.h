// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICLOCKNOTEACTIVITY_H
#define ICLOCKNOTEACTIVITY_H

@class ICActivity, ICNoteLockManager, UIViewController;



@interface ICLockNoteActivity : ICActivity

@property (nonatomic) NSInteger contextPath; // ivar: _contextPath
@property (readonly, nonatomic) ICNoteLockManager *lockManager; // ivar: _lockManager
@property (readonly, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)accessibilityLabel;
-(id)activityImage;
-(id)activityTintColor;
-(id)activityTitle;
-(id)activityType;
-(id)initWithNote:(id)arg0 presentingViewController:(id)arg1 ;
-(void)accessibilityAnnounceToggledLock;
-(void)performActivityWithCompletion:(id)arg0 ;


@end


#endif