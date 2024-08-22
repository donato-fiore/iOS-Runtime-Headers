// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLECELL_H
#define WFVARIABLECELL_H

@class UICollectionViewCell, UIImageView, WFVariable;



@interface WFVariableCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) WFVariable *variable; // ivar: _variable


+(CGFloat)widthWithVariable:(id)arg0 height:(CGFloat)arg1 ;
+(id)titleFont;
-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)updateVariableImage;


@end


#endif