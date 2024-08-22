// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCOMPOSERECIPIENT_H
#define CNCOMPOSERECIPIENT_H

@class NSString, CNAutocompleteResult, NSArray, NSSet, CNContact, NSPersonNameComponents;
@protocol NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNComposeRecipientOriginContext.h"

@interface CNComposeRecipient : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult; // ivar: _autocompleteResult
@property (retain, nonatomic) NSArray *cachedCompleteMatches; // ivar: _cachedCompleteMatches
@property (retain, nonatomic) NSSet *cachedHandles; // ivar: _cachedHandles
@property (retain, nonatomic) NSArray *cachedMatchedStrings; // ivar: _cachedMatchedStrings
@property (retain, nonatomic) NSArray *cachedSortedMembers; // ivar: _cachedSortedMembers
@property (readonly, nonatomic) NSString *commentedAddress;
@property (copy, nonatomic) NSString *compositeName; // ivar: _compositeName
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (copy, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *inputAddress; // ivar: _inputAddress
@property (readonly, nonatomic) BOOL isDirectoryServerResult;
@property (readonly, nonatomic) BOOL isGroup;
@property (nonatomic) BOOL isMemberOfGroup; // ivar: _isMemberOfGroup
@property (readonly, nonatomic) BOOL isSuggestedRecipient;
@property (readonly, nonatomic) NSUInteger kind; // ivar: _kind
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (retain, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (readonly, nonatomic) NSString *normalizedAddress;
@property (retain, nonatomic) CNComposeRecipientOriginContext *originContext; // ivar: _originContext
@property (readonly, copy, nonatomic) NSString *pasteboardString;
@property (readonly, nonatomic) NSString *placeholderName;
@property (readonly, nonatomic, getter=isRemovableFromSearchResults) BOOL removableFromSearchResults;
@property (readonly, nonatomic) NSString *shortName;
@property (readonly, nonatomic) BOOL showsAccessoryButton;
@property (readonly, nonatomic) BOOL showsChevronButton;
@property (readonly, nonatomic) NSUInteger sourceType;
@property (readonly, nonatomic) NSString *stringForEqualityTesting;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPasteboardUnarchiving;
@property (readonly, nonatomic) NSString *uncommentedAddress;
@property (copy, nonatomic) NSString *unlocalizedLabel; // ivar: _unlocalizedLabel
@property (copy, nonatomic) NSString *valueIdentifier; // ivar: _valueIdentifier
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;


+(BOOL)supportsSecureCoding;
+(id)composeRecipientWithAutocompleteResult:(id)arg0 ;
+(id)descriptorsForRequiredKeysForContact;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)os_log;
+(id)readableTypeIdentifiersForItemProvider;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentAddressToRecipient:(id)arg0 ;
-(BOOL)wasCompleteMatch;
-(id)_unformattedAddress;
-(id)alternativeToDisplayString;
-(id)associatedHandles;
-(id)children;
-(id)childrenWithCompleteMatches;
-(id)completelyMatchedAttributedStrings;
-(id)contactWithKeysToFetch:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayStringPreferringNickname:(BOOL)arg0 ;
-(id)fetchContactWithKeys:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 address:(id)arg1 displayString:(id)arg2 kind:(NSUInteger)arg3 ;
-(id)initWithContact:(id)arg0 address:(id)arg1 kind:(NSUInteger)arg2 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)preferredSendingAddress;
-(id)rawDisplayString;
-(id)sortedChildren;
-(id)unifiedHandles;
-(void)addRecipientToPasteboard:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif