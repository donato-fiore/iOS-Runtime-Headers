// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADTEXTBODY_H
#define OADTEXTBODY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "OADTextBodyProperties.h"
#import "OADTextListStyle.h"

@interface OADTextBody : NSObject {
    OADTextBodyProperties *mProperties;
    NSMutableArray *mParagraphs;
    OADTextListStyle *mTextListStyle;
}




-(BOOL)isEmpty;
-(BOOL)isSimilarToTextBody:(id)arg0 ;
-(BOOL)propagateActualTextStyleToTextListStyle;
-(NSUInteger)newLineCount;
-(NSUInteger)nonEmptyParagraphCount;
-(NSUInteger)paragraphCount;
-(id)addParagraph;
-(id)description;
-(id)findFirstTextRunOfClass:(Class)arg0 ;
-(id)firstParagraphEffects;
-(id)init;
-(id)overrideTextListStyle;
-(id)paragraphAtIndex:(NSUInteger)arg0 ;
-(id)plainText;
-(id)properties;
-(id)textListStyle;
-(void)addParagraphsFromTextBody:(id)arg0 ;
-(void)applyTextListStyle:(id)arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ownTextListStyle:(BOOL)arg1 ;
-(void)flattenProperties;
-(void)removeAllParagraphs;
-(void)removeLastParagraphIfEmpty;
-(void)removeLeadingNewlines;
-(void)removeTrailingNewlines;
-(void)removeUnnecessaryOverrides;
-(void)setParentTextListStyle:(id)arg0 ;
-(void)setProperties:(id)arg0 ;


@end


#endif