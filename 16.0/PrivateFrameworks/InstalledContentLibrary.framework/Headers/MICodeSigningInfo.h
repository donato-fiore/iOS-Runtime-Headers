// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MICODESIGNINGINFO_H
#define MICODESIGNINGINFO_H

@class NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface MICodeSigningInfo : NSObject

@property (readonly, copy, nonatomic) NSString *codeInfoIdentifier; // ivar: _codeInfoIdentifier
@property (readonly, nonatomic) NSUInteger codeSignerType; // ivar: _codeSignerType
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSDictionary *entitlements; // ivar: _entitlements
@property (readonly, nonatomic) NSUInteger profileValidationType; // ivar: _profileValidationType
@property (readonly, copy, nonatomic) NSNumber *signatureVersion; // ivar: _signatureVersion
@property (readonly, copy, nonatomic) NSString *signerIdentity; // ivar: _signerIdentity
@property (readonly, copy, nonatomic) NSString *signerOrganization; // ivar: _signerOrganization
@property (readonly, nonatomic) NSUInteger signingInfoSource; // ivar: _signingInfoSource
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 fromSource:(NSUInteger)arg1 ;
-(id)initWithSignerIdentity:(id)arg0 signerOrganization:(id)arg1 codeInfoIdentifier:(id)arg2 teamIdentifier:(id)arg3 signatureVersion:(id)arg4 entitlements:(id)arg5 signerType:(NSUInteger)arg6 profileType:(NSUInteger)arg7 signingInfoSource:(NSUInteger)arg8 ;


@end


#endif