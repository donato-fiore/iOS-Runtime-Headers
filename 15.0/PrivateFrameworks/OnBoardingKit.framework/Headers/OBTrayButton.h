// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OBTRAYBUTTON_H
#define OBTRAYBUTTON_H

@class UIButton;



@interface OBTrayButton : UIButton

@property (nonatomic) CGFloat lastTitleLabelHeight; // ivar: _lastTitleLabelHeight


+(CGFloat)standardHeight;
+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_buttonFont;
-(id)_fontTextStyle;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif