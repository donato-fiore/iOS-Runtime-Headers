// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXTEXTLAYOUTER_H
#define SXTEXTLAYOUTER_H

@class NSSet, TSDLayoutController, NSArray;

#import <Foundation/Foundation.h>

#import "SXTextTangierDocumentRoot.h"
#import "SXTextTangierContainerInfo.h"
#import "SXTextSource.h"

@interface SXTextLayouter : NSObject

@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot; // ivar: _documentRoot
@property (retain, nonatomic) NSSet *exclusionPaths; // ivar: _exclusionPaths
@property (retain, nonatomic) TSDLayoutController *layoutController; // ivar: _layoutController
@property (readonly, nonatomic) NSArray *paragraphRanges;
@property (retain, nonatomic) SXTextTangierContainerInfo *textInfo; // ivar: _textInfo
@property (retain, nonatomic) SXTextSource *textSource; // ivar: _textSource


-(CGFloat)baselineForLastLine;
-(CGFloat)calculateHeightForWidth:(CGFloat)arg0 ;
-(CGFloat)verticalLocationOfCharacterAtIndex:(NSUInteger)arg0 ;
-(id)exclusionPathIndexes;
-(id)firstColumn;
-(id)init;
-(id)initWithTextSource:(id)arg0 andDocumentRoot:(id)arg1 ;
-(id)textLayout;
-(id)wpLayout;
-(id)wpStorage;
-(struct CGRect )typographicBounds;
-(struct CGSize )boundingSize;
-(struct _NSRange )validAnchorRangeForRange:(struct _NSRange )arg0 ;
-(void)addExclusionPath:(id)arg0 ;
-(void)assignExclusionPaths;
-(void)createTextInfoIfNeeded;
-(void)invalidate;
-(void)removeAllExclusionPaths;
-(void)reset;


@end


#endif