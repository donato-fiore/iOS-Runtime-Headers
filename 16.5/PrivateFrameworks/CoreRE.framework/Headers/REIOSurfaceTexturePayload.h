// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REIOSURFACETEXTUREPAYLOAD_H
#define REIOSURFACETEXTUREPAYLOAD_H

@class IOSurface;


#import "RESharedResourcePayload.h"

@interface REIOSurfaceTexturePayload : RESharedResourcePayload

@property (readonly, nonatomic) IOSurface *ioSurface; // ivar: _ioSurface
@property (readonly, nonatomic) NSUInteger pixelFormat; // ivar: _pixelFormat
@property (readonly, nonatomic) NSUInteger planeIndex; // ivar: _planeIndex


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameUnderlyingIOSurface:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIOSurface:(id)arg0 plane:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif