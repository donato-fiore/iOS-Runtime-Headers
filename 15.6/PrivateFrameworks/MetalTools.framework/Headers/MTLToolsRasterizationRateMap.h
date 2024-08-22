// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLTOOLSRASTERIZATIONRATEMAP_H
#define MTLTOOLSRASTERIZATIONRATEMAP_H

@class NSString;
@protocol MTLRasterizationRateMapSPI, MTLDevice;


#import "MTLToolsObject.h"

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *label;
@property (readonly) NSUInteger layerCount;
@property (readonly) ? parameterBufferSizeAndAlign;
@property (readonly) ? physicalGranularity;
@property (readonly) ? screenSize;
@property (readonly) Class superclass;


-(id)formattedDescription:(NSUInteger)arg0 ;
-(struct ? )mapPhysicalToScreenCoordinates:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(struct ? )mapScreenToPhysicalCoordinates:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(struct ? )physicalSizeForLayer:(NSUInteger)arg0 ;
-(void)copyParameterDataToBuffer:(id)arg0 offset:(NSUInteger)arg1 ;


@end


#endif