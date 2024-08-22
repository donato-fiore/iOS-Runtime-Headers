// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSEARCHABLEITEM_H
#define CSSEARCHABLEITEM_H

@class NSString, NSDate;
@protocol CSIndexQueuableItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CSSearchableItemAttributeSet.h"

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying>



@property (retain) CSSearchableItemAttributeSet *attributeSet; // ivar: _attributeSet
@property (copy) NSString *bundleID;
@property (copy) NSString *domainIdentifier;
@property (copy) NSDate *expirationDate;
@property BOOL isUpdate;
@property BOOL noIndex;
@property (copy) NSString *protection;
@property unk score; // ivar: _score
@property (copy) NSString *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
+(id)searchableItemFromUserActivity:(id)arg0 bundleID:(id)arg1 ;
-(BOOL)_hasAttributesOfType:(id)arg0 ;
-(BOOL)_isFullyFormed;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_propertiesDescription;
-(id)attributes;
-(id)copyReconstructedAdditionalRecipients;
-(id)copyReconstructedAuthors;
-(id)copyReconstructedHiddenAdditionalRecipients;
-(id)copyReconstructedPrimaryRecipients;
-(id)copyReconstructedRecipients;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)filteredSpotlightAttributes;
-(id)init;
-(id)initWithAttributeSet:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUniqueIdentifier:(id)arg0 domainIdentifier:(id)arg1 attributeSet:(id)arg2 ;
-(id)searchableItem;
-(void)_fixBrokenAuthorNames:(id)arg0 ;
-(void)_parseEmailHeadersForFeatures:(id)arg0 ;
-(void)_populateMissingPeopleWithNames:(id)arg0 emailAddresses:(id)arg1 allItemPersons:(id)arg2 primaryItemPersons:(id)arg3 additionalItemPersons:(id)arg4 hiddenAdditionalItemPersons:(id)arg5 personDictionary:(id)arg6 contactProperties:(id)arg7 nameKey:(id)arg8 emailKey:(id)arg9 contactIdentifierKey:(id)arg10 personKey:(id)arg11 attributeSet:(id)arg12 ;
-(void)_standardizeDeprecatedProperties:(id)arg0 ;
-(void)_standardizeFileProvider:(id)arg0 ;
-(void)_standardizeHTML:(id)arg0 ;
-(void)_standardizeMarkAs:(id)arg0 ;
-(void)_standardizePeople:(id)arg0 ;
-(void)_standardizePortrait:(id)arg0 ;
-(void)_standardizeSceneClassification:(id)arg0 ;
-(void)_standardizeSiriShortcuts:(id)arg0 ;
-(void)_updateWithSearchableItem:(id)arg0 ;
-(void)breakOutPersonInformationInSet:(id)arg0 withName:(id)arg1 emails:(id)arg2 contactIdentifiers:(id)arg3 nameKey:(id)arg4 emailKey:(id)arg5 contactIdentifierKey:(id)arg6 emailAddressKey:(id)arg7 attributeSet:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractAndStandardizePersonInformation:(BOOL)arg0 anyEmail:(BOOL)arg1 anyName:(BOOL)arg2 attributeSet:(id)arg3 contactIdentifierKey:(id)arg4 emailKey:(id)arg5 nameKey:(id)arg6 emailAddressExtractKey:(id)arg7 mutableArrContactIdentifiers:(id)arg8 mutableArrEmails:(id)arg9 mutableArrNames:(id)arg10 persons:(id)arg11 ;
-(void)setAttributes:(id)arg0 ;
-(void)standardizeAttributes;


@end


#endif