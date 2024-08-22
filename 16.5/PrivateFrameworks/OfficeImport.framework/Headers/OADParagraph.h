// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADPARAGRAPH_H
#define OADPARAGRAPH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "OADParagraphProperties.h"
#import "OADCharacterProperties.h"

@interface OADParagraph : NSObject {
    OADParagraphProperties *mProperties;
    NSMutableArray *mTextRuns;
    OADCharacterProperties *mParagraphEndCharacterProperties;
}




-(BOOL)hasBulletCharacterProperties;
-(BOOL)isEmpty;
-(BOOL)isSimilarToParagraph:(id)arg0 ;
-(NSUInteger)characterCount;
-(NSUInteger)lineBreakCount;
-(NSUInteger)textRunCount;
-(id)addDateTimeFieldWithFormat:(int)arg0 ;
-(id)addFooterField;
-(id)addGenericTextFieldWithGuid:(id)arg0 type:(id)arg1 ;
-(id)addRegularTextRun;
-(id)addSlideNumberField;
-(id)addTextLineBreak;
-(id)bulletCharacterProperties;
-(id)description;
-(id)findFirstTextRunOfClass:(Class)arg0 ;
-(id)init;
-(id)paragraphEndCharacterProperties;
-(id)plainText;
-(id)properties;
-(id)textRunAtIndex:(NSUInteger)arg0 ;
-(void)applyProperties:(id)arg0 ;
-(void)changeParentParagraphPropertiesPreservingEffectiveValues:(id)arg0 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg0 ;
-(void)removeAllTextRuns;
-(void)removeUnnecessaryOverrides;
-(void)setParagraphEndCharacterProperties:(id)arg0 ;
-(void)setParentTextListStyle:(id)arg0 ;


@end


#endif