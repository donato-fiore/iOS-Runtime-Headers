// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRASTERIZATIONRATEMAPDESCRIPTORINTERNAL_H
#define MTLRASTERIZATIONRATEMAPDESCRIPTORINTERNAL_H

@class NSString;
@protocol MTLRasterizationRateMapDescriptorSPI;


#import "MTLRasterizationRateMapDescriptor.h"
#import "MTLRasterizationRateLayerArrayInternal.h"

@interface MTLRasterizationRateMapDescriptorInternal : MTLRasterizationRateMapDescriptor <MTLRasterizationRateMapDescriptorSPI>

 {
    ? _screenSize;
    NSString *_label;
    vector<MTLRasterizationRateLayerDescriptor *, std::allocator<MTLRasterizationRateLayerDescriptor *>> _layers;
    MTLRasterizationRateLayerArrayInternal *_layerAccessor;
}


@property (nonatomic) BOOL skipSampleValidationAndInterpolation; // ivar: _skipSampleValidationAndInterpolation


-(*id)layerPointer:(*NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)layerCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithScreenSize:(struct ? )arg0 ;
-(id)label;
-(id)layerAtIndex:(NSUInteger)arg0 ;
-(id)layers;
-(struct ? )screenSize;
-(void)dealloc;
-(void)setLabel:(id)arg0 ;
-(void)setLayer:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setScreenSize:(struct ? )arg0 ;


@end


#endif