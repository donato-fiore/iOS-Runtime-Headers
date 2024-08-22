// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVZOOMABLETEXTVIEW_H
#define _TVZOOMABLETEXTVIEW_H

@class IKViewElement;


#import "TVFocusableTextView.h"

@interface _TVZoomableTextView : TVFocusableTextView {
    CGFloat _maxHeight;
    CGFloat _maxWidth;
}


@property (nonatomic) CGSize cachedSizeThatFits; // ivar: _cachedSizeThatFits
@property (nonatomic) CGSize previousTargetSize; // ivar: _previousTargetSize
@property (retain, nonatomic) IKViewElement *viewElement; // ivar: _viewElement


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_clearCachedValues;
-(void)dealloc;
-(void)updateWithViewElement:(id)arg0 ;


@end


#endif