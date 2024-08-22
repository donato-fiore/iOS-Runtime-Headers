// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBHEADERACCESSORYBUTTON_H
#define OBHEADERACCESSORYBUTTON_H

@class UIButton;



@interface OBHeaderAccessoryButton : UIButton

@property (nonatomic) BOOL underlineLinks; // ivar: _underlineLinks


+(id)accessoryButton;
+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_fontTextStyle;
-(void)_updateText;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif