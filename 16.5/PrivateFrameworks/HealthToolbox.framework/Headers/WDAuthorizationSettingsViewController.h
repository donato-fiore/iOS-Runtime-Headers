// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDAUTHORIZATIONSETTINGSVIEWCONTROLLER_H
#define WDAUTHORIZATIONSETTINGSVIEWCONTROLLER_H

@class HKAuthorizationSettingsViewController;


#import "WDProfile.h"

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController

@property (retain, nonatomic) WDProfile *profile; // ivar: _profile


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithProfile:(id)arg0 style:(NSInteger)arg1 ;
-(id)sectionsForAuthController:(id)arg0 ;
-(id)specialCellWithIdentifier:(id)arg0 textLabelText:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_applicationWillEnterForeground;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif