// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXZOOMABLEINLINEHEADERSLAYOUTSPEC_H
#define PXZOOMABLEINLINEHEADERSLAYOUTSPEC_H



#import "PXFeatureSpec.h"

@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {
    UIEdgeInsets _headerFloatMargins;
    UIEdgeInsets _headerFloatMarginsWithTallSafeAreaInsets;
}


@property (readonly, nonatomic) CGFloat headerOffsetY; // ivar: _headerOffsetY
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;
-(struct UIEdgeInsets )headerFloatMarginsForSafeAreaInsets:(struct UIEdgeInsets )arg0 ;


@end


#endif