// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOEDITSELECTIONRINGVIEW_H
#define PUPHOTOEDITSELECTIONRINGVIEW_H

@class UIView, UIColor;



@interface PUPhotoEditSelectionRingView : UIView

@property (retain, nonatomic) UIColor *selectionRingColor; // ivar: _selectionRingColor
@property (nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif