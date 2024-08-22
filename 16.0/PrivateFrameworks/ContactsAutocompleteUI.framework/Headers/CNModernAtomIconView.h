// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMODERNATOMICONVIEW_H
#define CNMODERNATOMICONVIEW_H

@class UIView, NSArray, NUIContainerStackView;



@interface CNModernAtomIconView : UIView

@property (nonatomic) CGPoint drawingOffset; // ivar: _drawingOffset
@property (retain, nonatomic) NSArray *iconImages; // ivar: _iconImages
@property (nonatomic) CGFloat iconPadding;
@property (retain, nonatomic) NUIContainerStackView *stackView; // ivar: _stackView


-(CGFloat)preferredWidth;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif