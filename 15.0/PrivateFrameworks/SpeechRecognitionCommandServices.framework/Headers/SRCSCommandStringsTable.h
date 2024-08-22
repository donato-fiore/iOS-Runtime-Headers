// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRCSCOMMANDSTRINGSTABLE_H
#define SRCSCOMMANDSTRINGSTABLE_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SRCSCommandStringsTable : NSObject {
    NSString *_localeIdentifier;
    NSDictionary *_commandStringsCache;
}




+(BOOL)isLocaleIdentifier:(id)arg0 containedInLocaleIdentifiers:(id)arg1 ;
+(BOOL)isSameLocaleIdentifier:(id)arg0 secondLocaleIdentifier:(id)arg1 ;
+(id)activeTargetTypes;
+(id)commandStringsLoader:(SEL)arg0 ;
+(id)componentsFromLocaleIdentifier:(id)arg0 ;
+(id)deviceName;
+(id)languageModelDictionaryFromCommandText:(id)arg0 parsingErrorString:(*id)arg1 ;
+(id)supportedTargetTypes;
+(void)setCommandStringsLoader:(id)arg0 ;
-(BOOL)isSupportedCommandIdentifier:(id)arg0 forLocaleIdentifier:(id)arg1 ;
-(BOOL)isSupportedCommandIdentifier:(id)arg0 forTargetTypes:(id)arg1 ;
-(NSUInteger)countOptionalNodesOfLanguageModelDictionary:(id)arg0 ;
-(id)_commandStringsDictionaryForLocaleIdentifier:(id)arg0 ;
-(id)_commandStringsTable;
-(id)_rootCommandIdentifierFrom:(id)arg0 foundTargetType:(*id)arg1 ;
-(id)_spokenStringPermutationOfLanguageModelDictionary:(id)arg0 givenPermutation:(*unsigned short)arg1 stringsTable:(id)arg2 segmentOffsets:(id)arg3 ;
-(id)_warningsOfIncorrectTokenizationAcrossSegmentBoundariesInLanguageModelDictionary:(id)arg0 stringsTable:(id)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)languageModelDictionaryForCommandIdentifier:(id)arg0 targetType:(id)arg1 parsingErrorString:(*id)arg2 ;
-(id)languageModelDictionaryForCommandIdentifier:(id)arg0 targetTypes:(id)arg1 parsingErrorString:(*id)arg2 ;
-(id)rowDataForTargetTypes:(id)arg0 ;
-(id)spokenStringPermutationOfLanguageModelDictionary:(id)arg0 givenPermutation:(*unsigned short)arg1 stringsTable:(id)arg2 ;
-(id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg0 stringsTable:(id)arg1 ;
-(id)spokenStringPermutationsOfLanguageModelDictionary:(id)arg0 stringsTable:(id)arg1 restrictPermutationsToShortestAndLongest:(BOOL)arg2 ;
-(id)supportedCommandIdentifiersForTargetTypes:(id)arg0 ;
-(id)unparsedCommandTextForCommandIdentifier:(id)arg0 targetTypes:(id)arg1 ;
-(id)warningStringForText:(id)arg0 identifier:(id)arg1 textTable:(id)arg2 ;
-(void)_flushCommandStringsTable;
-(void)_removeDuplicateSpacesFromMutableString:(id)arg0 ;


@end


#endif