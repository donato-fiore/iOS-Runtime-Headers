// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCBORDERVIEW_H
#define ASCBORDERVIEW_H

@class UIView, UIColor, NSString;



@interface ASCBorderView : UIView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) NSString *cornerCurve;
@property (nonatomic) NSUInteger cornerMask;
@property (nonatomic) CGFloat cornerRadius;
@property (nonatomic) CGFloat width;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBorderColor;


@end


#endif