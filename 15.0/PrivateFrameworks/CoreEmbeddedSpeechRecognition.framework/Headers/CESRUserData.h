// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
@property (copy, nonatomic) NSDictionary *vocabularyWords; // ivar: _vocabularyWords


+(BOOL)supportsSecureCoding;
+(id)_fetchFromMediaPlayerWithKeepGoing:(id)arg0 ;
// +(void)_fetchFromSiriKitWithKeepGoing:(id)arg0 contactNames:(unk)arg1 contactGroupNames:(*id)arg2 vocabularyWords:(*id)arg3  ;
+(void)fetchUserDataWithLanguage:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
// +(void)fetchUserDataWithLanguage:(id)arg0 options:(id)arg1 keepGoing:(id)arg2 completion:(unk)arg3  ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_fetchHomeKitVocabularyWithKeepGoing:(id)arg0 ;
-(id)_fetchRankedContactIDsWithPSContactSuggester:(id)arg0 UpTo:(NSUInteger)arg1 ;
-(id)_initWithLanguage:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_fetchAppsWithKeepGoing:(id)arg0 ;
// -(void)_fetchContactsAndSiriKitWithKeepGoing:(id)arg0 options:(unk)arg1 vocabularyWords:(id)arg2  ;
// -(void)_fetchContactsWithKeepGoing:(id)arg0 options:(unk)arg1 siriKitContactNames:(id)arg2 siriKitContactGroupNames:(id)arg3  ;
// -(void)_fetchCoreDuetInteractionsWithKeepGoing:(id)arg0 completion:(unk)arg1  ;
// -(void)_fetchCoreDuetSearchEventsWithKeepGoing:(id)arg0 completion:(unk)arg1  ;
// -(void)_fetchCoreRoutineWithKeepGoing:(id)arg0 completion:(unk)arg1  ;
// -(void)_fetchCorrectionsWithKeepGoing:(id)arg0 completion:(unk)arg1  ;
-(void)_fetchDynamicKeyboardLanguageModelWithKeepGoing:(id)arg0 ;
-(void)_fetchEventKitWithKeepGoing:(id)arg0 ;
// -(void)_fetchPortraitWithKeepGoing:(id)arg0 completion:(unk)arg1  ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif