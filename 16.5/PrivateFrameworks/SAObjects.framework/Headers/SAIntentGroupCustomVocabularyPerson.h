// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAINTENTGROUPCUSTOMVOCABULARYPERSON_H
#define SAINTENTGROUPCUSTOMVOCABULARYPERSON_H

@class NSString;
@protocol SAIntentGroupCustomVocabularyEntity;


#import "AceObject.h"

@interface SAIntentGroupCustomVocabularyPerson : AceObject <SAIntentGroupCustomVocabularyEntity>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *middleName;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *relationship;
@property (readonly) Class superclass;


+(id)customVocabularyPerson;
+(id)customVocabularyPersonWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif