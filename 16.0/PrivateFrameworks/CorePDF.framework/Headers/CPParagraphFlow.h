// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPPARAGRAPHFLOW_H
#define CPPARAGRAPHFLOW_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CPParagraph.h"

@interface CPParagraphFlow : NSObject {
    CGFloat fTop;
    NSMutableArray *paragraphsAbove;
    NSMutableArray *paragraphsBelow;
    NSMutableArray *paragraphsLeft;
    NSMutableArray *paragraphsRight;
    BOOL adjacentToCallout;
}


@property int calloutType; // ivar: calloutType
@property CGFloat fBottom; // ivar: fBottom
@property CGFloat fLeft; // ivar: fLeft
@property CGFloat fRight; // ivar: fRight
@property (nonatomic) CPParagraph *nextInColumn; // ivar: nextInColumn
@property (retain, nonatomic) CPParagraph *paragraph; // ivar: paragraph
@property BOOL placed; // ivar: placed


-(BOOL)intervalOverlapLeft:(CGFloat)arg0 right:(CGFloat)arg1 paragraphs:(id)arg2 ;
-(BOOL)intervalOverlapLeft:(CGFloat)arg0 right:(CGFloat)arg1 rects:(id)arg2 ;
-(BOOL)intervalOverlapTop:(CGFloat)arg0 bottom:(CGFloat)arg1 paragraphs:(id)arg2 ;
-(CGFloat)area;
-(CGFloat)dAbove;
-(CGFloat)dBelow;
-(NSInteger)topDescending:(id)arg0 ;
-(id)belowTwoSides:(unsigned int)arg0 ;
-(id)description;
-(id)ignoreCallouts:(unsigned int)arg0 ;
-(id)initWithParagraph:(id)arg0 ;
-(id)nextParagraphInColumn:(id)arg0 ;
-(id)simpleRule:(unsigned int)arg0 ;
-(id)twoSides:(unsigned int)arg0 ;
-(int)inOrder;
-(int)inOrder:(BOOL)arg0 ;
-(int)leftOrder;
-(int)outOrder;
-(int)rightOrder;
-(struct CGRect )belowBounds;
-(void)dealloc;
-(void)removeFromAbove:(id)arg0 ;
-(void)removeFromBelow:(id)arg0 ;
-(void)replaceAbove:(id)arg0 withOneOf:(id)arg1 ;
-(void)replaceBelow:(id)arg0 withOneOf:(id)arg1 ;


@end


#endif