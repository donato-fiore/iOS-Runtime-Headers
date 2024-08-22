// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMSHUTTERBUTTONRINGVIEW_H
#define CAMSHUTTERBUTTONRINGVIEW_H

@class UIView, UIColor;



@interface CAMShutterButtonRingView : UIView

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) BOOL showContrastBorder; // ivar: _showContrastBorder
@property (nonatomic) CAMShutterButtonSpec spec; // ivar: _spec


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSpec:(struct CAMShutterButtonSpec )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif