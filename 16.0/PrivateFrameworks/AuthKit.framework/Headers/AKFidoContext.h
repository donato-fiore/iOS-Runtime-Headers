// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKFIDOCONTEXT_H
#define AKFIDOCONTEXT_H

@class NSData, NSString, NSArray, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AKFidoContext : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSData *challenge; // ivar: _challenge
@property (readonly, nonatomic) NSString *credentialName; // ivar: _credentialName
@property (readonly, nonatomic) NSArray *credentials; // ivar: _credentials
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *originalChallenge; // ivar: _originalChallenge
@property (copy, nonatomic) NSString *promptBody; // ivar: _promptBody
@property (copy, nonatomic) NSString *promptHeader; // ivar: _promptHeader
@property (copy, nonatomic) NSData *promptIconData; // ivar: _promptIconData
@property (copy, nonatomic) NSNumber *promptIconScale; // ivar: _promptIconScale
@property (copy, nonatomic) NSString *promptTitle; // ivar: _promptTitle
@property (readonly, nonatomic) NSString *relyingPartyIdentifier; // ivar: _relyingPartyIdentifier
@property (readonly, nonatomic) NSData *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithChallenge:(id)arg0 relyingPartyIdentifier:(id)arg1 userIdentifier:(id)arg2 displayName:(id)arg3 credentialName:(id)arg4 credentials:(id)arg5 ;
-(id)initWithChallengeString:(id)arg0 relyingPartyIdentifier:(id)arg1 userIdentifierString:(id)arg2 displayName:(id)arg3 credentialName:(id)arg4 credentials:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParameters:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif