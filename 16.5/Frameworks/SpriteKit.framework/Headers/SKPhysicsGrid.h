// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKPHYSICSGRID_H
#define SKPHYSICSGRID_H


#import <Foundation/Foundation.h>


@interface SKPhysicsGrid : NSObject

@property (readonly, nonatomic) float height; // ivar: _height
@property (readonly, nonatomic) float width; // ivar: _width


+(id)gridFromOccupancyArray:(char *)arg0 width:(int)arg1 height:(int)arg2 ;
+(id)gridFromTexture:(id)arg0 alphaThreshold:(float)arg1 accuracy:(float)arg2 ;
+(id)vectorGridFromTexture:(id)arg0 accuracy:(float)arg1 ;
-(void)spritesFromGrid:(id)arg0 gridSize:(struct CGSize )arg1 zPosition:(CGFloat)arg2 edgeColor:(id)arg3 interiorColor:(id)arg4 spriteSize:(struct CGSize )arg5 physicsBody:(id)arg6 ;
-(void)spritesFromGrid:(id)arg0 xDivisions:(int)arg1 zPosition:(CGFloat)arg2 spriteSize:(struct CGSize )arg3 texture:(id)arg4 physicsBody:(id)arg5 ;


@end


#endif