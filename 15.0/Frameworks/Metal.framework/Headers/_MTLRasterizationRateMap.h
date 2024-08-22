// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLRASTERIZATIONRATEMAP_H
#define _MTLRASTERIZATIONRATEMAP_H

@class NSString;
@protocol MTLRasterizationRateMapSPI, MTLDevice;

#import <Foundation/Foundation.h>


@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI>

 {
    id<MTLDevice> *_device;
    NSString *_label;
    ? _dim;
}


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
-(id)init;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(struct ? )mapPhysicalToScreenCoordinates:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(struct ? )mapScreenToPhysicalCoordinates:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(struct ? )physicalCoordinate:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(struct ? )physicalSizeForLayer:(NSUInteger)arg0 ;
-(struct ? )screenCoordinate:(struct ? )arg0 forLayer:(NSUInteger)arg1 ;
-(void)copyParameterDataToBuffer:(id)arg0 atOffset:(NSUInteger)arg1 ;
-(void)copyParameterDataToBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif