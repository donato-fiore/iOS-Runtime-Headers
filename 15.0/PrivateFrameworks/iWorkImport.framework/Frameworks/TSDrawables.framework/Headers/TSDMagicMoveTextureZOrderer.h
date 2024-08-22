// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMAGICMOVETEXTUREZORDERER_H
#define TSDMAGICMOVETEXTUREZORDERER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface TSDMagicMoveTextureZOrderer : NSObject {
    NSArray *_zOrderMatches;
    NSArray *_outgoingTexturesInZOrder;
    NSArray *_incomingTexturesInZOrder;
    *CGFloat _percentTexturesTimes;
    NSArray *_percentTextures;
}


@property (readonly, nonatomic) NSArray *flattenableAnimationMatches;
@property (readonly, nonatomic) NSUInteger zOrderIntersectionsCount; // ivar: _zOrderIntersectionsCount


-(NSUInteger)p_bestZIndexForUnassignedMatch:(id)arg0 inMatchArray:(id)arg1 ;
-(NSUInteger)p_zIntersectionsBetweenZOrdererMatches:(id)arg0 ;
-(id)init;
-(id)initWithAnimationMatches:(id)arg0 ;
-(id)p_debugDescription;
-(id)p_newArrayBySortingMatches:(id)arg0 withInterpolatedPercent:(CGFloat)arg1 ;
-(id)texturedRectanglesAtPercent:(CGFloat)arg0 ;
-(void)dealloc;
-(void)p_addFlattenableAnimationMatches:(id)arg0 toArray:(id)arg1 ;
-(void)p_addVisibleTexturesFromMatches:(id)arg0 toArray:(id)arg1 interpolatedPercent:(CGFloat)arg2 ;
-(void)p_adjustZOrdererMatchesZIndexByTextureType:(id)arg0 ;
-(void)p_calculateTextureArraysFromIntersections;
-(void)p_setupZOrderMatchesWithAnimationMatches:(id)arg0 ;


@end


#endif