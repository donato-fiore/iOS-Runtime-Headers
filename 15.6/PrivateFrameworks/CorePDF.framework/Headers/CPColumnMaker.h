// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPCOLUMNMAKER_H
#define CPCOLUMNMAKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CPZone.h"

@interface CPColumnMaker : NSObject {
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    CGFloat maxParagraphDistance;
}


@property CGRect pageBounds; // ivar: pageBounds


-(BOOL)canSafelyAdd:(id)arg0 to:(id)arg1 ;
-(BOOL)closeImagesBetween:(id)arg0 and:(id)arg1 bounds:(struct CGRect )arg2 ;
-(BOOL)column:(id)arg0 isLinkedBelowTo:(id)arg1 ;
-(BOOL)cuttingShapeBetween:(id)arg0 and:(id)arg1 ;
-(BOOL)intervalOverlapLeft:(CGFloat)arg0 right:(CGFloat)arg1 paragraphs:(id)arg2 ;
-(BOOL)paragraph:(id)arg0 isAbove:(id)arg1 ;
-(BOOL)paragraph:(id)arg0 isBelow:(id)arg1 ;
-(BOOL)paragraph:(id)arg0 isLinkedBelowTo:(id)arg1 ;
-(BOOL)paragraph:(id)arg0 notOnSameShapeAs:(id)arg1 ;
-(CGFloat)averageSpacing:(id)arg0 ;
-(id)chunkAbove:(id)arg0 in:(id)arg1 ;
-(id)columns;
-(id)init;
-(id)paragraphAbove:(id)arg0 in:(id)arg1 ;
-(id)paragraphBelow:(id)arg0 in:(id)arg1 ;
-(void)anchorImages;
-(void)callOuts;
-(void)dealloc;
-(void)intersectionCallout:(id)arg0 ;
-(void)makeColumnsFrom:(id)arg0 zone:(id)arg1 ;
-(void)partitionShapes:(id)arg0 ;
-(void)splitColumns:(id)arg0 ;


@end


#endif