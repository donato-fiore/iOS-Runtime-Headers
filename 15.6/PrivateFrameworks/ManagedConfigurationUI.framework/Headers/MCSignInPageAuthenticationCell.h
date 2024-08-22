// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCSIGNINPAGEAUTHENTICATIONCELL_H
#define MCSIGNINPAGEAUTHENTICATIONCELL_H

@class UITableViewCell, UIView;



@interface MCSignInPageAuthenticationCell : UITableViewCell

@property (retain, nonatomic) UIView *authView; // ivar: _authView


-(id)initWithAuthView:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addAuthView:(id)arg0 ;


@end


#endif