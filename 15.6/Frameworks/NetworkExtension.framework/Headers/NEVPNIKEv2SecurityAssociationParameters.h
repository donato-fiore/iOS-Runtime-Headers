// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEVPNIKEV2SECURITYASSOCIATIONPARAMETERS_H
#define NEVPNIKEV2SECURITYASSOCIATIONPARAMETERS_H

@protocol NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>



@property NSInteger diffieHellmanGroup; // ivar: _diffieHellmanGroup
@property NSInteger encryptionAlgorithm; // ivar: _encryptionAlgorithm
@property NSInteger integrityAlgorithm; // ivar: _integrityAlgorithm
@property int lifetimeMinutes; // ivar: _lifetimeMinutes


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif