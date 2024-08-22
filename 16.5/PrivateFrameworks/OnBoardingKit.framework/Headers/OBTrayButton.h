// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OBTRAYBUTTON_H
#define OBTRAYBUTTON_H

@class UIButton;



@interface OBTrayButton : UIButton

@property (nonatomic) CGFloat lastTitleLabelHeight; // ivar: _lastTitleLabelHeight


+(CGFloat)standardHeight;
+(id)buttonWithType:(NSInteger)arg0 ;
-(id)_fontTextStyle;
-(id)buttonFont;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif