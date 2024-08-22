// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPHYSICSGRID_H
#define PKPHYSICSGRID_H


#import <Foundation/Foundation.h>

#import "PKQuadTree.h"

@interface PKPhysicsGrid : NSObject {
    ? grid;
    PKQuadTree *quadTree;
}


@property (nonatomic) shared_ptr<PKCGrid> gridPtr;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int width;


+(id)gridFromOccupancyArray:(char *)arg0 bytePitch:(int)arg1 width:(int)arg2 height:(int)arg3 ;
+(id)gridFromRGBAU8PixelData:(char *)arg0 imageWidth:(int)arg1 imageHeight:(int)arg2 alphaThreshold:(float)arg3 accuracy:(float)arg4 ;
+(id)vectorGridFromRGBAU8PixelData:(char *)arg0 imageWidth:(int)arg1 imageHeight:(int)arg2 accuracy:(float)arg3 ;
-(BOOL)isGridRegionOccupied:(int)arg0 y:(int)arg1 width:(int)arg2 height:(int)arg3 ;
-(id)physicsBodyFromLVS0:(struct CGRect )arg0 ;
-(id)physicsBodyFromSmoothedOutline:(CGFloat)arg0 size:(struct CGSize )arg1 ;
-(struct shared_ptr<PKPath> )pathFromOutlineWithSmoothingThreshold:(CGFloat)arg0 bounds:(struct ? )arg1 ;
-(unsigned char)gridDataAtX:(int)arg0 y:(int)arg1 z:(int)arg2 ;


@end


#endif