// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGINVITATION_H
#define PKAPPLETSUBCREDENTIALSHARINGINVITATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKSharingCarKeyInvitation.h"

@interface PKAppletSubcredentialSharingInvitation : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *activationCode; // ivar: _activationCode
@property (copy, nonatomic) NSString *brandIdentifier; // ivar: _brandIdentifier
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) NSUInteger entitlement; // ivar: _entitlement
@property (nonatomic, getter=isForWatch) BOOL forWatch; // ivar: _forWatch
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isThirdPartyCrossPlatformInvitation;
@property (copy, nonatomic) NSString *issuer; // ivar: _issuer
@property (readonly, copy, nonatomic) NSString *manufacturerIdentifier;
@property (retain, nonatomic) PKSharingCarKeyInvitation *originalInvitationMessage; // ivar: _originalInvitationMessage
@property (copy, nonatomic) NSString *originatorIDSHandle; // ivar: _originatorIDSHandle
@property (copy, nonatomic) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier
@property (copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (copy, nonatomic) NSString *recipientName; // ivar: _recipientName
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (nonatomic) NSUInteger supportedRadioTechnologies; // ivar: _supportedRadioTechnologies
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)invitationFromShare:(id)arg0 entitlement:(id)arg1 withCredential:(id)arg2 pass:(id)arg3 ;
-(BOOL)canBeSent;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInvitation:(id)arg0 ;
-(BOOL)isSameInvitationAsInvitation:(id)arg0 ;
-(NSUInteger)hash;
-(id)addCarKeyPassConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCrossPlatformInvitation:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sharingSessionIdentifier:(id)arg1 originatorIDSHandle:(id)arg2 invitationData:(id)arg3 ;
-(id)initWithPartnerIdentifier:(id)arg0 brandIdentifier:(id)arg1 pairedReaderIdentifier:(id)arg2 recipientName:(id)arg3 entitlement:(NSUInteger)arg4 supportedRadioTechnologies:(NSUInteger)arg5 ;
-(id)invitationRequestRepresentation;
-(id)sharingConfigurationRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif