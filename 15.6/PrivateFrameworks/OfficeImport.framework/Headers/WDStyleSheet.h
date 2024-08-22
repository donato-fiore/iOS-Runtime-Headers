// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDSTYLESHEET_H
#define WDSTYLESHEET_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "WDCharacterProperties.h"
#import "WDParagraphProperties.h"
#import "WDStyle.h"
#import "WDDocument.h"

@interface WDStyleSheet : NSObject {
    NSMutableDictionary *mStyleDictionary;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}


@property (readonly, weak) WDDocument *document; // ivar: mDocument


-(NSUInteger)styleCount;
-(id)allAliasesForStyleId:(id)arg0 name:(id)arg1 ;
-(id)createStyleWithId:(id)arg0 type:(int)arg1 ;
-(id)createStyleWithName:(id)arg0 type:(int)arg1 ;
-(id)defaultCharacterProperties;
-(id)defaultCharacterStyle;
-(id)defaultListStyle;
-(id)defaultParagraphProperties;
-(id)defaultParagraphStyle;
-(id)defaultTableStyle;
-(id)description;
-(id)initWithDocument:(id)arg0 ;
-(id)paragraphStyleWithStartingName:(id)arg0 ;
-(id)styleIdForName:(id)arg0 ;
-(id)styleIdToName:(id)arg0 ;
-(id)styleNameToUniqueId:(id)arg0 ;
-(id)styleWithId:(id)arg0 ;
-(id)styleWithName:(id)arg0 ;
-(id)styles;
-(void)addStyle:(id)arg0 name:(id)arg1 ;
-(void)createDefaultStyles;
-(void)initializeDefaultProperties;
-(void)removeStyleWithId:(id)arg0 ;
-(void)setDefaultCharacterStyle:(id)arg0 ;
-(void)setDefaultListStyle:(id)arg0 ;
-(void)setDefaultParagraphStyle:(id)arg0 ;
-(void)setDefaultTableStyle:(id)arg0 ;
-(void)setName:(id)arg0 forId:(id)arg1 ;


@end


#endif