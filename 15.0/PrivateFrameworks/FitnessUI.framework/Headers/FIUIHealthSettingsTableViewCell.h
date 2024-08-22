// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIHEALTHSETTINGSTABLEVIEWCELL_H
#define FIUIHEALTHSETTINGSTABLEVIEWCELL_H

@class UITableViewCell, UIView;
@protocol FIUIHealthSettingsForceUpdatable;



@interface FIUIHealthSettingsTableViewCell : UITableViewCell {
    UIView *_inputView;
}


@property (weak, nonatomic) NSObject<FIUIHealthSettingsForceUpdatable> *forceUpdatable; // ivar: _forceUpdatable


-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canResignFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)inputView;
-(void)setInputView:(id)arg0 ;


@end


#endif