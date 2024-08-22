// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVERTICALEDGESHADOWVIEW_H
#define _UIVERTICALEDGESHADOWVIEW_H



#import "UIShadowView.h"

@interface _UIVerticalEdgeShadowView : UIShadowView

@property (readonly, nonatomic) NSUInteger edge; // ivar: _edge
@property (readonly, nonatomic) CGFloat width; // ivar: _width


-(id)initWithWidth:(CGFloat)arg0 edge:(NSUInteger)arg1 ;
-(void)_loadImageIfNecessary;
-(void)layoutSubviews;


@end


#endif