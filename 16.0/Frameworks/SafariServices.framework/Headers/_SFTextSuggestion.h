// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFTEXTSUGGESTION_H
#define _SFTEXTSUGGESTION_H

@class UITextSuggestion, SFPasswordCredentialIdentity, WBSCreditCardData, WBSHideMyEmailRecord, NSString, SFAutoFillOneTimeCode, WBSSavedAccountMatch, WBUAutoFillDisplayData, NSURLCredential;


#import "SFSingleCreditCardData.h"

@interface _SFTextSuggestion : UITextSuggestion

@property (readonly, nonatomic) SFPasswordCredentialIdentity *credentialIdentity; // ivar: _credentialIdentity
@property (readonly, nonatomic) WBSCreditCardData *creditCardData; // ivar: _creditCardData
@property (readonly, nonatomic) WBSHideMyEmailRecord *emailRecord; // ivar: _emailRecord
@property (readonly, nonatomic) NSString *generatedPassword; // ivar: _generatedPassword
@property (readonly, nonatomic) SFAutoFillOneTimeCode *oneTimeCode; // ivar: _oneTimeCode
@property (readonly, nonatomic) WBSSavedAccountMatch *savedAccountMatch; // ivar: _savedAccountMatch
@property (readonly, nonatomic) SFSingleCreditCardData *singleCreditCardData; // ivar: _singleCreditCardData
@property (readonly, nonatomic) WBUAutoFillDisplayData *singleDisplayData; // ivar: _singleDisplayData
@property (readonly, nonatomic) BOOL submitForm; // ivar: _submitForm
@property (readonly, nonatomic) NSInteger textSuggestionType; // ivar: _textSuggestionType
@property (readonly, nonatomic) NSURLCredential *urlCredential; // ivar: _urlCredential
@property (readonly, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)textSuggestionToProvisionHideMyEmailRecord;
+(id)textSuggestionWithCredentialIdentity:(id)arg0 submitForm:(BOOL)arg1 ;
+(id)textSuggestionWithCreditCardData:(id)arg0 ;
+(id)textSuggestionWithGeneratedPassword:(id)arg0 ;
+(id)textSuggestionWithHideMyEmailRecord:(id)arg0 ;
+(id)textSuggestionWithOneTimeCode:(id)arg0 ;
+(id)textSuggestionWithSavedAccountMatch:(id)arg0 submitForm:(BOOL)arg1 ;
+(id)textSuggestionWithSingleCreditCardDataValue:(id)arg0 ;
+(id)textSuggestionWithSingleDisplayData:(id)arg0 ;
+(id)textSuggestionWithUsername:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextSuggestionType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif