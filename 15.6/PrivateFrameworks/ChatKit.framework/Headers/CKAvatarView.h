// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKAVATARVIEW_H
#define CKAVATARVIEW_H

@class CNAvatarView, NSString, UIViewController;



@interface CKAvatarView : CNAvatarView

@property (retain, nonatomic, setter=_ck_setContextToken:) NSString *_ck_contextToken;
@property (weak, nonatomic) NSString *preferredHandle; // ivar: _preferredHandle
@property (weak, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController


-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif