// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSOCIALSERVICECORENAMEPARSER_H
#define CLSSOCIALSERVICECORENAMEPARSER_H

@class NPNameParser, NSCharacterSet, NSMutableDictionary, NSDictionary;


#import "CLSSocialService.h"

@interface CLSSocialServiceCoreNameParser : CLSSocialService

@property (retain) NPNameParser *nameParser; // ivar: _nameParser
@property (retain, nonatomic) NSCharacterSet *nonLetterCharacterSet; // ivar: _nonLetterCharacterSet
@property (retain, nonatomic) NSMutableDictionary *regularExpressionByRelationshipByLocale; // ivar: _regularExpressionByRelationshipByLocale
@property (retain, nonatomic) NSMutableDictionary *sexHintByCNIdentifier; // ivar: _sexHintByCNIdentifier
@property (retain, nonatomic) NSDictionary *vocabularyByRelationshipByLocale; // ivar: _vocabularyByRelationshipByLocale


+(NSUInteger)_personRelationshipFromString:(id)arg0 ;
+(id)_dictionaryKeyForPersonRelationship:(NSUInteger)arg0 ;
-(NSUInteger)_sexHintForRelationship:(NSUInteger)arg0 ;
-(NSUInteger)relationshipHintForPerson:(id)arg0 usingLocales:(id)arg1 ;
-(NSUInteger)sexHintForPerson:(id)arg0 usingLocales:(id)arg1 ;
-(id)_normalizeName:(id)arg0 ;
-(id)_parentRelationships;
-(id)_regularExpressionForRelationship:(NSUInteger)arg0 languageCode:(id)arg1 ;
-(id)init;
-(void)invalidateMemoryCaches;


@end


#endif