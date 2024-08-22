// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIPARALLAXCLOCKLAYOUTREQUEST_H
#define PIPARALLAXCLOCKLAYOUTREQUEST_H

@class NURenderRequest, PFParallaxLayout;
@protocol PISegmentationItem;



@interface PIParallaxClockLayoutRequest : NURenderRequest

@property (retain, nonatomic) PFParallaxLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem


-(NSInteger)mediaComponentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithComposition:(id)arg0 ;
-(id)initWithSegmentationItem:(id)arg0 ;
-(id)newRenderJob;
-(void)submit:(id)arg0 ;


@end


#endif