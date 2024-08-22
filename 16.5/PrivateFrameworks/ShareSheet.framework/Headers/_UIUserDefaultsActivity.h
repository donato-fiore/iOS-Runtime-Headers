// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUSERDEFAULTSACTIVITY_H
#define _UIUSERDEFAULTSACTIVITY_H

@class NSArray, UIViewController;


#import "UIActivity.h"
#import "_UIActivityUserDefaults.h"

@interface _UIUserDefaultsActivity : UIActivity

@property (nonatomic) NSInteger activityCategory; // ivar: _activityCategory
@property (copy, nonatomic) NSArray *availableActivities; // ivar: _availableActivities
@property (retain, nonatomic) UIViewController *presentableActivityViewController; // ivar: _presentableActivityViewController
@property (retain, nonatomic) _UIActivityUserDefaults *userDefaults; // ivar: _userDefaults


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_actionImage;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithUserDefaults:(id)arg0 activityCategory:(NSInteger)arg1 ;
-(void)_cleanup;
-(void)_prepareActivityViewControllerIfNeeded;
-(void)_settingsViewControllerDidDismiss:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 items:(id)arg1 error:(id)arg2 ;


@end


#endif