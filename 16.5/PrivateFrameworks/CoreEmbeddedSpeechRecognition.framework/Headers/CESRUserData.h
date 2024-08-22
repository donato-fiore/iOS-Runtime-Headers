// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CESRUSERDATA_H
#define CESRUSERDATA_H

@class NSArray, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CESRUserData : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *appNames; // ivar: _appNames
@property (copy, nonatomic) NSArray *contactWordsWithFrequency; // ivar: _contactWordsWithFrequency
@property (copy, nonatomic) NSArray *corrections; // ivar: _corrections
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSArray *eventLocationNames; // ivar: _eventLocationNames
@property (copy, nonatomic) NSArray *eventTitles; // ivar: _eventTitles
@property (copy, nonatomic) NSDictionary *interactionSenderDisplayNames; // ivar: _interactionSenderDisplayNames
@property (copy, nonatomic) NSDictionary *keyboardLMDynamicVocabularyItems; // ivar: _keyboardLMDynamicVocabularyItems
@property (readonly, copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSArray *locationOfInterestNames; // ivar: _locationOfInterestNames
@property (copy, nonatomic) NSArray *pexNamedEntityNames; // ivar: _pexNamedEntityNames
@property (copy, nonatomic) NSDictionary *searchEventValues; // ivar: _searchEventValues
@property (copy, nonatomic) NSArray *spatialLocationOfInterestNames; // ivar: _spatialLocationOfInterestNames
@property (copy, nonatomic) NSArray *uaapWords; // ivar: _uaapWords
@property (copy, nonatomic) NSDictionary *vocabularyWords; // ivar: _vocabularyWords


+(BOOL)supportsSecureCoding;
+(id)_vocabularyWordCategories;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_handleContacts:(id)arg0 ;
-(id)_handleItems:(id)arg0 forKVFieldTypes:(id)arg1 withCategory:(id)arg2 ;
-(id)_handleKeyboardLMDynamicVocabularyItems:(id)arg0 ;
-(id)_handleVocabularyWords:(id)arg0 template:(id)arg1 ;
-(id)_initWithLanguage:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItems:(id)arg0 language:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)populateUserDataFromItems:(id)arg0 ;


@end


#endif