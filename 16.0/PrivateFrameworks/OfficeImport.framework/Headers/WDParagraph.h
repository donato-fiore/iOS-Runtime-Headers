// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDPARAGRAPH_H
#define WDPARAGRAPH_H

@class NSMutableArray;


#import "WDBlock.h"
#import "WDParagraphProperties.h"

@interface WDParagraph : WDBlock {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}


@property NSUInteger identifier; // ivar: identifier


-(BOOL)isContinuationOf:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isTextFrame;
-(NSUInteger)runCount;
-(float)maxReflectionDistance;
-(id)addAnnotation:(int)arg0 ;
-(id)addAnnotation:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(id)addBookmark;
-(id)addBookmark:(id)arg0 type:(int)arg1 ;
-(id)addCharacterRun;
-(id)addDateTime:(id)arg0 ;
-(id)addEndnote;
-(id)addFieldMarker;
-(id)addFieldMarker:(int)arg0 ;
-(id)addFootnote;
-(id)addHyperlinkFieldMarker;
-(id)addHyperlinkFieldMarker:(int)arg0 ;
-(id)addMath:(id)arg0 ;
-(id)addSpecialCharacter;
-(id)addSymbol;
-(id)description;
-(id)initWithText:(id)arg0 ;
-(id)initWithText:(id)arg0 string:(id)arg1 ;
-(id)newRunIterator;
-(id)properties;
-(id)runAt:(NSUInteger)arg0 ;
-(id)runIterator;
-(id)runs;
-(int)blockType;
-(void)addRun:(id)arg0 ;
-(void)clearProperties;
-(void)clearRuns;
-(void)insertRun:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeLastCharacter:(unsigned short)arg0 ;
-(void)removeRun:(id)arg0 ;


@end


#endif