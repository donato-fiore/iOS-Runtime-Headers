// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPERSON_H
#define INPERSON_H

@class NSString, NSArray, NSPersonNameComponents;
@protocol INCacheableContainer, INCodableAttributeRelationComparing, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INPersonHandle.h"

@interface INPerson : NSObject <INCacheableContainer, INCodableAttributeRelationComparing, INKeyImageProducing, INImageProxyInjecting, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding>

 {
    NSString *_displayName;
    NSString *_userInput;
}


@property (readonly) INImage *_keyImage;
@property (readonly, copy, nonatomic) NSArray *aliases;
@property (copy, nonatomic) NSArray *aliases; // ivar: _aliases
@property (readonly, copy, nonatomic) NSArray *alternativeSiriMatches;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, nonatomic, getter=isContactSuggestion) BOOL contactSuggestion; // ivar: _contactSuggestion
@property (copy, nonatomic) NSString *customIdentifier; // ivar: _customIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *handle;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) INImage *image; // ivar: _image
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL isMe; // ivar: _isMe
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (copy, nonatomic) INPersonHandle *personHandle; // ivar: _personHandle
@property (copy, nonatomic) NSString *phonemeData; // ivar: _phonemeData
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *relationship; // ivar: _relationship
@property (copy, nonatomic) NSArray *scoredAlternatives; // ivar: _scoredAlternatives
@property (nonatomic) NSInteger searchProvider; // ivar: _searchProvider
@property (readonly, copy, nonatomic) NSArray *siriMatches;
@property (copy, nonatomic) NSString *sourceAppBundleIdentifier; // ivar: _sourceAppBundleIdentifier
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (readonly, nonatomic) NSInteger suggestionType;
@property (nonatomic) NSInteger suggestionType; // ivar: _suggestionType
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userURIString;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;


+(BOOL)supportsSecureCoding;
+(id)expectedCNContactKeys;
+(id)toNilScoredPersons:(id)arg0 ;
-(BOOL)_intents_compareValue:(id)arg0 relation:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 aliases:(id)arg8 suggestionType:(NSInteger)arg9 isMe:(BOOL)arg10 alternatives:(id)arg11 sourceAppBundleIdentifier:(id)arg12 phonemeData:(id)arg13 isContactSuggestion:(BOOL)arg14 ;
-(id)_initWithUserInput:(id)arg0 personHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 relationship:(id)arg7 aliases:(id)arg8 suggestionType:(NSInteger)arg9 isMe:(BOOL)arg10 scoredAlternatives:(id)arg11 sourceAppBundleIdentifier:(id)arg12 phonemeData:(id)arg13 isContactSuggestion:(BOOL)arg14 searchProvider:(NSInteger)arg15 ;
-(id)_intents_cacheableObjects;
-(id)_intents_indexingRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)_userInput;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 ;
-(id)initWithHandle:(id)arg0 displayName:(id)arg1 contactIdentifier:(id)arg2 ;
-(id)initWithHandle:(id)arg0 nameComponents:(id)arg1 contactIdentifier:(id)arg2 ;
-(id)initWithHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 aliases:(id)arg6 suggestionType:(NSInteger)arg7 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 isContactSuggestion:(BOOL)arg6 suggestionType:(NSInteger)arg7 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 isMe:(BOOL)arg6 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 isMe:(BOOL)arg6 suggestionType:(NSInteger)arg7 ;
-(id)initWithPersonHandle:(id)arg0 nameComponents:(id)arg1 displayName:(id)arg2 image:(id)arg3 contactIdentifier:(id)arg4 customIdentifier:(id)arg5 relationship:(id)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif