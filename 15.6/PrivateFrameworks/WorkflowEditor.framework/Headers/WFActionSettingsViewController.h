// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFACTIONSETTINGSVIEWCONTROLLER_H
#define WFACTIONSETTINGSVIEWCONTROLLER_H

@class UIViewController, WFAction, NSDictionary;
@protocol WFActionSettingsViewControllerDelegate;



@interface WFActionSettingsViewController : UIViewController

@property (readonly, nonatomic) WFAction *action; // ivar: _action
@property (readonly, nonatomic) NSDictionary *definition; // ivar: _definition
@property (weak, nonatomic) NSObject<WFActionSettingsViewControllerDelegate> *delegate; // ivar: _delegate


-(BOOL)accessibilityPerformEscape;
-(id)initWithAction:(id)arg0 definition:(id)arg1 ;
-(void)donePressed:(id)arg0 ;


@end


#endif