// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLRASTERIZATIONRATELAYERARRAYINTERNAL_H
#define MTLRASTERIZATIONRATELAYERARRAYINTERNAL_H



#import "MTLRasterizationRateLayerArray.h"
#import "MTLRasterizationRateMapDescriptor.h"

@interface MTLRasterizationRateLayerArrayInternal : MTLRasterizationRateLayerArray {
    MTLRasterizationRateMapDescriptor *_parent;
}




-(id)initWithParent:(id)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(void)setObject:(id)arg0 atIndexedSubscript:(NSUInteger)arg1 ;


@end


#endif