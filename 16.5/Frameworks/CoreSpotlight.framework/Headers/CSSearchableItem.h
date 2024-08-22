// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSEARCHABLEITEM_H
#define CSSEARCHABLEITEM_H

@class NSString, NSDate;
@protocol CSIndexQueuableItem, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CSSearchableItemAttributeSet.h"

@interface CSSearchableItem : NSObject <CSIndexQueuableItem, NSSecureCoding, NSCopying>

 {
    NSInteger _rank;
}


@property BOOL allowTextStore;
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
-(NSInteger)compareByRank:(id)arg0 ;
-(NSInteger)rank;
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
-(void)_populateMissingPeopleWithNames:(id)arg0 emailAddresses:(id)arg1 allItemPersons:(id)arg2 primaryItemPersons:(id)arg3 additionalItemPersons:(id)arg4 hiddenAdditionalItemPersons:(id)arg5 personDictionary:(id)arg6 contactProperties:(id)arg7 nameKey:(id)arg8 emailKey:(id)arg9 contactIdentifierKey:(id)arg10 personKey:(id)arg11 photosPersonIdentifierKey:(id)arg12 attributeSet:(id)arg13 ;
-(void)_standardizeDeprecatedProperties:(id)arg0 ;
-(void)_standardizeFileProvider:(id)arg0 ;
-(void)_standardizeHTML:(id)arg0 ;
-(void)_standardizeMarkAs:(id)arg0 ;
-(void)_standardizePeople:(id)arg0 ;
-(void)_standardizePortrait:(id)arg0 ;
-(void)_standardizeSceneClassification:(id)arg0 ;
-(void)_standardizeSiriShortcuts:(id)arg0 ;
-(void)_updateWithSearchableItem:(id)arg0 ;
-(void)breakOutPersonInformationInSet:(id)arg0 withName:(id)arg1 emails:(id)arg2 contactIdentifiers:(id)arg3 photosPersonIdentifiers:(id)arg4 nameKey:(id)arg5 emailKey:(id)arg6 contactIdentifierKey:(id)arg7 emailAddressKey:(id)arg8 photosPersonIdentifierKey:(id)arg9 attributeSet:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)extractAndStandardizePersonInformation:(id)arg0 contactIdentifierKey:(id)arg1 emailKey:(id)arg2 nameKey:(id)arg3 emailAddressExtractKey:(id)arg4 photosPersonIdentifierKey:(id)arg5 contactIdentifiers:(id)arg6 emails:(id)arg7 names:(id)arg8 photosPersonIdentifiers:(id)arg9 persons:(id)arg10 ;
-(void)setAttributes:(id)arg0 ;
-(void)setRank:(NSInteger)arg0 ;
-(void)standardizeAttributes;


@end


#endif