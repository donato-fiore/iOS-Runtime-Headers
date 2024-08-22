// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLRASTERIZATIONRATEMAPDESCRIPTOR_H
#define MTLRASTERIZATIONRATEMAPDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTLRasterizationRateLayerArray.h"

@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>



@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) NSUInteger layerCount;
@property (readonly, nonatomic) MTLRasterizationRateLayerArray *layers;
@property (nonatomic) ? screenSize;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(struct ? )arg0 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(struct ? )arg0 layer:(id)arg1 ;
+(id)rasterizationRateMapDescriptorWithScreenSize:(struct ? )arg0 layerCount:(NSUInteger)arg1 layers:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)layerAtIndex:(NSUInteger)arg0 ;
-(void)setLayer:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif