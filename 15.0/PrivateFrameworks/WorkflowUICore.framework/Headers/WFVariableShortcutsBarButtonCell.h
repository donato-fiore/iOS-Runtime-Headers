// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLESHORTCUTSBARBUTTONCELL_H
#define WFVARIABLESHORTCUTSBARBUTTONCELL_H

@class UICollectionViewCell, UIButton;



@interface WFVariableShortcutsBarButtonCell : UICollectionViewCell

@property (readonly, nonatomic) UIButton *contentButton; // ivar: _contentButton


+(CGFloat)widthWithTitle:(id)arg0 icon:(id)arg1 ;
+(id)titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif