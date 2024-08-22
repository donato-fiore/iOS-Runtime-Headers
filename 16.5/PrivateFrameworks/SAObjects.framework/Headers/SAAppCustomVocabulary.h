// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAPPCUSTOMVOCABULARY_H
#define SAAPPCUSTOMVOCABULARY_H

@class NSString;
@protocol SAIntentGroupCustomVocabularyEntity;


#import "SADomainObject.h"

@interface SAAppCustomVocabulary : SADomainObject

@property (copy, nonatomic) NSString *intentSlotValue;
@property (retain, nonatomic) NSObject<SAIntentGroupCustomVocabularyEntity> *vocabularyEntity;
@property (copy, nonatomic) NSString *vocabularyIdentifier;


+(id)appCustomVocabulary;
+(id)appCustomVocabularyWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif