// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBRECENTINPUTCELL_H
#define UIKBRECENTINPUTCELL_H



#import "UICollectionViewCell.h"
#import "UILabel.h"

@interface UIKBRecentInputCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label; // ivar: _label


+(id)textColorForRenderConfig:(id)arg0 isSelected:(BOOL)arg1 ;
+(id)titleAttributesForRenderConfig:(id)arg0 ;
-(BOOL)_canFocusProgrammatically;
-(BOOL)isFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setInputText:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif