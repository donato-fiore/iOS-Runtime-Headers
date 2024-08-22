// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSFORMMETADATA_H
#define WBSFORMMETADATA_H

@class NSNumber, NSArray, NSURL, NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSFormMetadata : NSObject <NSSecureCoding>

 {
    NSNumber *_containsAtLeastOneSecureTextField;
    NSArray *_controls;
}


@property (readonly, nonatomic) NSURL *action; // ivar: _action
@property (readonly, nonatomic) BOOL allowsAutocomplete; // ivar: _allowsAutocomplete
@property (readonly, copy, nonatomic) NSDictionary *annotations; // ivar: _annotations
@property (readonly, nonatomic, getter=isBestForCredentialPreFill) BOOL bestForCredentialPreFill; // ivar: _bestForCredentialPreFill
@property (readonly, nonatomic, getter=isBestForPageLevelAutoFill) BOOL bestForPageLevelAutoFill; // ivar: _bestForPageLevelAutoFill
@property (readonly, nonatomic, getter=isBestForStreamlinedLogin) BOOL bestForStreamlinedLogin; // ivar: _bestForStreamlinedLogin
@property (readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID; // ivar: _confirmPasswordElementUniqueID
@property (readonly, nonatomic) BOOL containsActiveElement; // ivar: _containsActiveElement
@property (readonly, nonatomic) BOOL containsAtLeastOneSecureTextField;
@property (readonly, copy, nonatomic) NSArray *controls;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic, getter=isEligibleForAutomaticLogin) BOOL eligibleForAutomaticLogin; // ivar: _eligibleForAutomaticLogin
@property (readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID; // ivar: _firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID
@property (readonly, nonatomic) BOOL isSearchForm; // ivar: _isSearchForm
@property (readonly, nonatomic) NSString *logicalFormElementSelector; // ivar: _logicalFormElementSelector
@property (readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID; // ivar: _oldPasswordElementUniqueID
@property (readonly, copy, nonatomic) NSString *passwordElementUniqueID; // ivar: _passwordElementUniqueID
@property (copy, nonatomic) NSDictionary *passwordRequirements; // ivar: _passwordRequirements
@property (readonly, nonatomic) NSUInteger requestType; // ivar: _requestType
@property (readonly, copy, nonatomic) NSString *textSample; // ivar: _textSample
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger uniqueID; // ivar: _uniqueID
@property (readonly, copy, nonatomic) NSString *userNameElementUniqueID; // ivar: _userNameElementUniqueID
@property (readonly, nonatomic) BOOL usesGeneratedPassword; // ivar: _usesGeneratedPassword
@property (readonly, nonatomic) BOOL usesRelAsync; // ivar: _usesRelAsync
@property (readonly, nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_init;
-(id)formMetadataByReplacingControlsWith:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif