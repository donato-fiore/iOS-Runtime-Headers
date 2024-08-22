// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARUIRINGSSTATICBUFFERFACTORY_H
#define ARUIRINGSSTATICBUFFERFACTORY_H


#import <Foundation/Foundation.h>


@interface ARUIRingsStaticBufferFactory : NSObject



+(NSUInteger)circleSegments;
+(id)ringIndexBufferWithDevice:(id)arg0 ;
+(id)ringVertexPositionsBufferWithDevice:(id)arg0 ;
+(void)clearCaches;


@end


#endif