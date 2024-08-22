// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PTRENDERPIPELINE_H
#define PTRENDERPIPELINE_H

@class NSString;
@protocol MTLDeviceSPI;

#import <Foundation/Foundation.h>

#import "PTRenderPipelineDescriptor.h"

@interface PTRenderPipeline : NSObject {
    PTRenderPipelineDescriptor *_descriptor;
    id<MTLDeviceSPI> *_device;
    NSUInteger _activeVersion;
    NSString *_description;
}


@property (readonly) NSUInteger activeVersion;


+(BOOL)isMetalDeviceSupported:(id)arg0 ;
+(BOOL)isRenderVersionSupported:(NSUInteger)arg0 ;
+(NSUInteger)latestVersion;
+(int)prewarmForMediaserverd;
+(int)prewarmWithDescriptor:(id)arg0 ;
-(NSUInteger)minimumResourceHeapSize;
-(id)createRenderStateWithQuality:(int)arg0 ;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(int)encodeRenderTo:(id)arg0 withRenderRequest:(id)arg1 ;
-(void)prewarm;
-(void)setResourceHeap:(id)arg0 ;


@end


#endif