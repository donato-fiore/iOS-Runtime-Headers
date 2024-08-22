// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTLAYOUTFRAGMENTVIEW_H
#define _UITEXTLAYOUTFRAGMENTVIEW_H

@class NSTextLayoutFragment;


#import "UIView.h"

@interface _UITextLayoutFragmentView : UIView

@property (readonly, nonatomic) CGRect clipFrame;
@property (nonatomic) CGRect clipRect; // ivar: _clipRect
@property (nonatomic) CGPoint containerOrigin; // ivar: _containerOrigin
@property (nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, nonatomic) NSTextLayoutFragment *layoutFragment; // ivar: _layoutFragment
@property (nonatomic) CGSize layoutSize; // ivar: _layoutSize


-(id)initWithLayoutFragment:(id)arg0 containerOrigin:(struct CGPoint )arg1 containerSize:(struct CGSize )arg2 ;
-(void)_updateGeometry;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)enumerateTextAttachmentViewsUsingBlock:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif