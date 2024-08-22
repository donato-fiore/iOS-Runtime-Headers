// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEVPNIKEV1PROPOSALPARAMETERS_H
#define NEVPNIKEV1PROPOSALPARAMETERS_H

@protocol NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NEVPNIKEv1ProposalParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>



@property int diffieHellmanGroup; // ivar: _diffieHellmanGroup
@property NSInteger encryptionAlgorithm; // ivar: _encryptionAlgorithm
@property NSInteger integrityAlgorithm; // ivar: _integrityAlgorithm
@property int lifetimeSeconds; // ivar: _lifetimeSeconds


+(BOOL)supportsSecureCoding;
-(BOOL)checkValidityAndCollectErrors:(id)arg0 ;
-(id)copyLegacyDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initFromLegacyDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif