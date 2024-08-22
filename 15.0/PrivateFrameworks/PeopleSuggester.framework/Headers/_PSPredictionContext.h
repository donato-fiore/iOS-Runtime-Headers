// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSPREDICTIONCONTEXT_H
#define _PSPREDICTIONCONTEXT_H

@class NSString, NSDictionary, NSArray, NSUUID, NSDate;
@protocol NSSecureCoding, ATXSuggestionExecutableProtocol;

#import <Foundation/Foundation.h>


@interface _PSPredictionContext : NSObject <NSSecureCoding, ATXSuggestionExecutableProtocol>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSDictionary *appBundleIdsToShareExtensionBundleIdsMapping; // ivar: _appBundleIdsToShareExtensionBundleIdsMapping
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSArray *candidateShareExtensionBundleIds; // ivar: _candidateShareExtensionBundleIds
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger locationType; // ivar: _locationType
@property (copy, nonatomic) NSUUID *locationUUID; // ivar: _locationUUID
@property (copy, nonatomic) NSArray *locationUUIDs; // ivar: _locationUUIDs
@property (copy, nonatomic) NSArray *photoSuggestedPeople; // ivar: _photoSuggestedPeople
@property (copy, nonatomic) NSString *searchPrefix; // ivar: _searchPrefix
@property (copy, nonatomic) NSArray *seedRecipients; // ivar: _seedRecipients
@property (nonatomic) BOOL showPotentialFamilyMembers; // ivar: _showPotentialFamilyMembers
@property (copy, nonatomic) NSDate *suggestionDate; // ivar: _suggestionDate
@property NSInteger suggestionPurpose; // ivar: _suggestionPurpose
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)totalHashOfElementsFromArray:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif