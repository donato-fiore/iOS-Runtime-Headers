// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECDKIMMESSAGEHEADER_H
#define ECDKIMMESSAGEHEADER_H

@class NSMutableDictionary, NSString, NSNumber, NSArray, NSData;

#import <Foundation/Foundation.h>


@interface ECDKIMMessageHeader : NSObject {
    NSMutableDictionary *_headerFields;
}


@property (readonly, copy, nonatomic) NSString *agentOrUserIdentifier; // ivar: _agentOrUserIdentifier
@property (readonly, nonatomic) NSUInteger bodyCanonicalizationAlgorithm; // ivar: _bodyCanonicalizationAlgorithm
@property (readonly, nonatomic) NSString *bodyForCanonicalization; // ivar: _bodyForCanonicalization
@property (readonly, nonatomic) NSNumber *bodyLength; // ivar: _bodyLength
@property (readonly, copy, nonatomic) NSString *canonicalizedBodyHash; // ivar: _canonicalizedBodyHash
@property (readonly, nonatomic) NSArray *copiedHeaderFields; // ivar: _copiedHeaderFields
@property (readonly, nonatomic) NSUInteger hashingAlgorithm; // ivar: _hashingAlgorithm
@property (readonly, nonatomic) NSUInteger headerCanonicalizationAlgorithm; // ivar: _headerCanonicalizationAlgorithm
@property (readonly, nonatomic) NSString *headerNameForCanonicalization; // ivar: _headerNameForCanonicalization
@property (readonly, copy, nonatomic) NSArray *queryMethods; // ivar: _queryMethods
@property (readonly, nonatomic) NSString *selector; // ivar: _selector
@property (readonly, copy, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (readonly, nonatomic) CGFloat signatureExpiration; // ivar: _signatureExpiration
@property (readonly, nonatomic) CGFloat signatureTimestamp; // ivar: _signatureTimestamp
@property (readonly, copy, nonatomic) NSArray *signedHeaderFields; // ivar: _signedHeaderFields
@property (readonly, nonatomic) NSUInteger signingAlgorithm; // ivar: _signingAlgorithm
@property (readonly, copy, nonatomic) NSString *signingDomainIdentifier; // ivar: _signingDomainIdentifier
@property (readonly, copy, nonatomic) NSString *version; // ivar: _version


-(BOOL)_isValidDomain:(id)arg0 ;
-(id)_errorForInvalidOptionalKey:(id)arg0 actualValue:(id)arg1 expectedValue:(id)arg2 ;
-(id)_errorForInvalidRequiredKey:(id)arg0 actualValue:(id)arg1 expectedValue:(id)arg2 ;
-(id)_errorForMissingRequiredKey:(id)arg0 ;
-(id)_parseAgentOrUserIdentifierWithSigningDomainIdentifier:(id)arg0 ;
-(id)_parseBodyLength;
-(id)_parseCanonicalizedBodyHash;
-(id)_parseCopiedHeaderFields;
-(id)_parseMessageCanonicalizationAlgorithm;
-(id)_parseQueryMethod;
-(id)_parseSelector;
-(id)_parseSignatureDataWithHeaderBody:(id)arg0 ;
-(id)_parseSignatureExpiration;
-(id)_parseSignatureTimestamp;
-(id)_parseSignedHeaderFields;
-(id)_parseSigningAlgorithm;
-(id)_parseSigningDomainIdentifier;
-(id)_parseVersion;
-(id)initWithHeaderFieldName:(id)arg0 headerBody:(id)arg1 error:(*id)arg2 ;


@end


#endif