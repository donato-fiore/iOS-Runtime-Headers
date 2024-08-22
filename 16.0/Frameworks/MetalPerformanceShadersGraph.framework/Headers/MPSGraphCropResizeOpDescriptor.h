// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSGRAPHCROPRESIZEOPDESCRIPTOR_H
#define MPSGRAPHCROPRESIZEOPDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPSGraphCropResizeOpDescriptor : NSObject <NSCopying>



@property (nonatomic) NSUInteger coordinateMode; // ivar: _coordinateMode
@property (nonatomic) BOOL normalizeCoordinates; // ivar: _normalizeCoordinates
@property (nonatomic) NSUInteger resizeHeight; // ivar: _resizeHeight
@property (nonatomic) NSUInteger resizeMode; // ivar: _resizeMode
@property (nonatomic) NSUInteger resizeWidth; // ivar: _resizeWidth
@property (nonatomic) NSUInteger samplingMode; // ivar: _samplingMode
@property (nonatomic) float spatialScale; // ivar: _spatialScale


+(id)descriptorWithResizeWidth:(NSUInteger)arg0 resizeHeight:(NSUInteger)arg1 ;
+(id)descriptorWithResizeWidth:(NSUInteger)arg0 resizeHeight:(NSUInteger)arg1 normalizeCoordinates:(BOOL)arg2 spatialScale:(float)arg3 resizeMode:(NSUInteger)arg4 samplingMode:(NSUInteger)arg5 coordinateMode:(NSUInteger)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif