// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPZONE_H
#define CPZONE_H

@class NSMutableArray, CPZoneProfile, NSArray;
@protocol CPGraphicUser;


#import "CPRegion.h"
#import "CPCharSequence.h"

@interface CPZone : CPRegion <CPGraphicUser>

 {
    NSMutableArray *zoneBorders;
    *CGPoint outerVertices;
    *CGPoint swollenOuterVertices;
    CGFloat area;
    BOOL isStraddleZone;
    CPZoneProfile *zoneProfile;
    NSArray *leftGuides;
    NSArray *rightGuides;
    NSArray *gutters;
    NSArray *spacers;
    CPCharSequence *charactersInZone;
    NSMutableArray *textLinesInZone;
    NSArray *graphicsInZone;
    NSMutableArray *backgroundGraphics;
    unsigned int usedGraphicCount;
}




-(BOOL)bordersWindClockwise;
-(BOOL)canContain:(struct CGRect )arg0 ;
-(BOOL)contains:(id)arg0 ;
-(BOOL)hasBorders;
-(BOOL)hasNeighborShape:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)isStraddleZone;
-(BOOL)isZone;
-(BOOL)mapToWordPairs:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWordPairsWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWords:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)mapToWordsWithIndex:(*unk)arg0 passing:(*void)arg1 ;
-(BOOL)rectangleBordersAtLeft:(*id)arg0 top:(*id)arg1 right:(*id)arg2 bottom:(*id)arg3 ;
-(CGFloat)area;
-(NSInteger)borderZOrder;
-(NSInteger)compareArea:(id)arg0 ;
-(NSInteger)neighborZOrder;
-(id)backgroundGraphics;
-(id)charactersInZone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)graphicsInZone;
-(id)gutters;
-(id)init;
-(id)leftGuides;
-(id)rightGuides;
-(id)spacers;
-(id)textLinesInZone;
-(id)zoneBorders;
-(id)zoneProfile;
-(struct CGColor *)newBackgroundColor;
-(struct CGPoint *)outerVertices;
-(struct CGPoint *)swollenOuterVertices;
-(struct CGRect )swollenZoneBounds;
-(struct CGRect )zoneBounds;
-(struct CGRect )zoneBoundsFromVertices:(struct CGPoint *)arg0 ofCount:(unsigned int)arg1 ;
-(unsigned int)usedGraphicCount;
-(unsigned int)vertexCount;
-(unsigned int)wordCount;
-(void)accept:(id)arg0 ;
-(void)addContentFrom:(id)arg0 ;
-(void)addPDFChar:(*void)arg0 ;
-(void)dealloc;
-(void)incrementUsedGraphicCount;
-(void)removeUnfilledNeighborShapes;
-(void)setCharactersInZone:(id)arg0 ;
-(void)setGutters:(id)arg0 ;
-(void)setIsStraddleZone:(BOOL)arg0 ;
-(void)setLeftGuides:(id)arg0 ;
-(void)setRightGuides:(id)arg0 ;
-(void)setSpacers:(id)arg0 ;
-(void)setZoneBorders:(id)arg0 ;
-(void)setZoneProfile:(id)arg0 ;


@end


#endif