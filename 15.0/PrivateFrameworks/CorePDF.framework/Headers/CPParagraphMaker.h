// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPPARAGRAPHMAKER_H
#define CPPARAGRAPHMAKER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CPZone.h"
#import "CPPage.h"

@interface CPParagraphMaker : NSObject {
    NSMutableArray *avail;
    NSMutableArray *paragraphs;
    NSMutableArray *compoundedShapesOnPage;
    BOOL spacingSet;
    CGFloat currentSpacing;
    CPZone *parent;
    CPPage *page;
}




+(BOOL)line:(id)arg0 alignsWith:(id)arg1 ;
-(BOOL)firstWordOf:(id)arg0 fits:(id)arg1 indent:(CGFloat)arg2 ;
-(BOOL)fitsBelow:(id)arg0 alignment:(NSUInteger)arg1 spacing:(CGFloat)arg2 from:(int)arg3 ;
-(BOOL)isGraphicBetween:(id)arg0 and:(id)arg1 ;
-(BOOL)line:(id)arg0 isAlignedWith:(id)arg1 ;
-(BOOL)line:(id)arg0 isBelow:(id)arg1 ;
-(BOOL)line:(id)arg0 isDirectlyBelow:(id)arg1 ;
-(BOOL)spacingOf:(id)arg0 and:(id)arg1 and:(id)arg2 is:(*CGFloat)arg3 ;
-(BOOL)styleOf:(id)arg0 differsFromStyleOf:(id)arg1 ;
-(NSUInteger)alignmentOf:(id)arg0 and:(id)arg1 ;
-(NSUInteger)alignmentOf:(id)arg0 and:(id)arg1 and:(id)arg2 ;
-(id)newInitialParagraph;
-(id)paragraphs;
-(int)indexOfUniqueLineBelow:(id)arg0 from:(int)arg1 ;
-(int)linesThatOverlapLineAt:(int)arg0 between:(CGFloat)arg1 and:(CGFloat)arg2 from:(int)arg3 ;
-(int)paragraph:(id)arg0 splits:(id)arg1 ;
-(void)addCompoundedShapesOn:(id)arg0 to:(id)arg1 ;
-(void)addLinesTo:(id)arg0 ;
-(void)dealloc;
-(void)makeParagraphsIn:(id)arg0 ;


@end


#endif