// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVTAVATARACTIONBUTTON_H
#define AVTAVATARACTIONBUTTON_H

@class UIButton;



@interface AVTAvatarActionButton : UIButton

@property (nonatomic) BOOL isDestructive; // ivar: _isDestructive


+(id)buttonWithAction:(id)arg0 ;
+(id)defaultButtonWithAction:(id)arg0 ;
+(id)destructiveButtonWithAction:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif