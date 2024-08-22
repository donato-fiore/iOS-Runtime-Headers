// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXLAYERSTACKREQUEST_H
#define PIPARALLAXLAYERSTACKREQUEST_H

@class NURenderRequest, PFParallaxLayout;
@protocol PISegmentationItem;


#import "PIParallaxStyle.h"

@interface PIParallaxLayerStackRequest : NURenderRequest

@property (nonatomic) NSInteger layerStackMode; // ivar: _layerStackMode
@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (retain, nonatomic) PIParallaxStyle *style; // ivar: _style


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithSegmentationItem:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif