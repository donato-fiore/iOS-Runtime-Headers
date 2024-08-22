// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPASSWORDBREACHTOGGLECELL_H
#define SFPASSWORDBREACHTOGGLECELL_H

@class UITableViewCell, UISwitch;
@protocol SFPasswordBreachToggleCellDelegate;



@interface SFPasswordBreachToggleCell : UITableViewCell {
    UISwitch *_toggleSwitch;
    id<SFPasswordBreachToggleCellDelegate> *_delegate;
}




-(id)initWithReuseIdentifier:(id)arg0 delegate:(id)arg1 ;
-(void)_userToggledBreachDetection:(id)arg0 ;
-(void)setCurrentPasswordBreachState:(BOOL)arg0 ;


@end


#endif