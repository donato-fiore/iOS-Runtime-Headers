// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPGUIDEFINDER_H
#define CPGUIDEFINDER_H

@class NSMutableArray;
@protocol CPDisposable;

#import <Foundation/Foundation.h>

#import "CPZone.h"
#import "CPCluster.h"

@interface CPGuideFinder : NSObject <CPDisposable>

 {
    CPZone *contentZone;
    unsigned int countOfWordsInZone;
    *CGFloat anchorArray;
    *CGFloat rightHandSideArray;
    *? crossingWordArray;
    CPCluster *anchors;
    CPCluster *rightHandSides;
    CGFloat medianFontSizeOfFirstCharacter;
    CGFloat medianFontSizeOfLastCharacter;
    NSMutableArray *gutters;
    NSMutableArray *leftGuides;
    NSMutableArray *rightGuides;
}




+(BOOL)guideSeparates:(id)arg0 from:(id)arg1 ;
+(BOOL)gutterSeparates:(id)arg0 from:(id)arg1 ;
+(void)reclusterBetweenGuides:(id)arg0 ;
+(void)reclusterPreservingAlignment:(id)arg0 ;
-(BOOL)addStripTo:(id)arg0 bottom:(CGFloat)arg1 left:(CGFloat)arg2 top:(CGFloat)arg3 right:(CGFloat)arg4 ;
-(BOOL)hasGutters;
-(BOOL)hasLeftGuides;
-(BOOL)hasRightGuides;
-(CGFloat)medianFontSizeOfFirstCharacter;
-(CGFloat)medianFontSizeOfLastCharacter;
-(id)gutters;
-(id)initWithContentZone:(id)arg0 ;
-(id)leftGuides;
-(id)rightGuides;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)findGuides;
-(void)findGutters;
-(void)findWordEdgeClusters;
-(void)func:(id)arg0 and:(id)arg1 and:(unsigned int)arg2 and:(unsigned int)arg3 ;
-(void)getWordEdges;
-(void)markTextLines;
-(void)setAlignForWordWithExtent:(struct ? *)arg0 stripArray:(id)arg1 stripMax:(CGFloat)arg2 ;
-(void)splitTextLines;
-(void)splitTextLinesAtBorderWords;
-(void)splitTextLinesBetweenBorderWords;
-(void)subdivideGutterFrom:(unsigned int)arg0 to:(unsigned int)arg1 ;
-(void)subdivideLeftGuideAt:(unsigned int)arg0 ;
-(void)subdivideRightGuideAt:(unsigned int)arg0 ;
-(void)subdivideStripInto:(id)arg0 from:(CGFloat)arg1 to:(CGFloat)arg2 borderedBy:(struct ? *)arg3 ofCount:(unsigned int)arg4 crossedBy:(struct ? *)arg5 ofCount:(unsigned int)arg6 ;


@end


#endif