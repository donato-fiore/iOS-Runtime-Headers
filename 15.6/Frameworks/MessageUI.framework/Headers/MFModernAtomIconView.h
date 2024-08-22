// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMODERNATOMICONVIEW_H
#define MFMODERNATOMICONVIEW_H

@class UIView, NSArray;



@interface MFModernAtomIconView : UIView

@property (nonatomic) CGPoint drawingOffset; // ivar: _drawingOffset
@property (retain, nonatomic) NSArray *iconImages; // ivar: _iconImages
@property (nonatomic) CGFloat iconPadding; // ivar: _iconPadding


-(CGFloat)preferredWidth;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif