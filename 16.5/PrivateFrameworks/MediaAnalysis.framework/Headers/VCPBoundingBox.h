// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPBOUNDINGBOX_H
#define VCPBOUNDINGBOX_H


#import <Foundation/Foundation.h>


@interface VCPBoundingBox : NSObject

@property int classIndex; // ivar: _classIndex
@property float confidence; // ivar: _confidence
@property float flag; // ivar: _flag
@property float maxX; // ivar: _maxX
@property float maxY; // ivar: _maxY
@property float minX; // ivar: _minX
@property float minY; // ivar: _minY


-(float)area;
-(float)computeIntersectionOverUnion:(id)arg0 ;
-(id)initWithCenterAndSize:(float)arg0 y:(float)arg1 width:(float)arg2 height:(float)arg3 confidence:(float)arg4 ;
-(id)initWithXYAndSize:(float)arg0 y:(float)arg1 width:(float)arg2 height:(float)arg3 confidence:(float)arg4 ;
-(id)intersect:(id)arg0 ;
-(id)union:(id)arg0 ;
-(struct CGRect )getCGRectWithClipWidth:(float)arg0 height:(float)arg1 ;


@end


#endif