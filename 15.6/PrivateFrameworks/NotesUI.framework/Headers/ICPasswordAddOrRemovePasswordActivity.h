// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICPASSWORDADDORREMOVEPASSWORDACTIVITY_H
#define ICPASSWORDADDORREMOVEPASSWORDACTIVITY_H

@class UIWindow, ICNote;


#import "ICRDActivity.h"

@interface ICPasswordAddOrRemovePasswordActivity : ICRDActivity

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (weak, nonatomic) UIWindow *displayWindow; // ivar: _displayWindow
@property (retain, nonatomic) ICNote *note; // ivar: _note
@property (copy, nonatomic) id *willPerformActivityBlock; // ivar: _willPerformActivityBlock


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
// -(id)initWithNote:(id)arg0 displayWindow:(id)arg1 willPerformActivityBlock:(id)arg2 completionHandler:(unk)arg3  ;
-(void)accessibilityAnnounceAddOrRemovePasswordWithIntent:(NSUInteger)arg0 withNote:(id)arg1 ;
-(void)performActivity;


@end


#endif