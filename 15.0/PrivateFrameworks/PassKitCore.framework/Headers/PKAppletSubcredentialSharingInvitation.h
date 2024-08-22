// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLETSUBCREDENTIALSHARINGINVITATION_H
#define PKAPPLETSUBCREDENTIALSHARINGINVITATION_H

@class NSString, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAppletSubcredentialSharingInvitation : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (nonatomic) NSUInteger entitlement; // ivar: _entitlement
@property (nonatomic, getter=isForWatch) BOOL forWatch; // ivar: _forWatch
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *issuer; // ivar: _issuer
@property (copy, nonatomic) NSString *originatorIDSHandle; // ivar: _originatorIDSHandle
@property (copy, nonatomic) NSString *pairedReaderIdentifier; // ivar: _pairedReaderIdentifier
@property (copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (copy, nonatomic) NSString *recipientName; // ivar: _recipientName
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier; // ivar: _sharingSessionIdentifier
@property (nonatomic) NSUInteger supportedRadioTechnologies; // ivar: _supportedRadioTechnologies


+(BOOL)supportsSecureCoding;
+(id)invitationFromSharedCredential:(id)arg0 withCredential:(id)arg1 pass:(id)arg2 ;
-(BOOL)canBeSent;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToInvitation:(id)arg0 ;
-(BOOL)isSameInvitationAsInvitation:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataRepresentation;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 sharingSessionIdentifier:(id)arg1 originatorIDSHandle:(id)arg2 invitationData:(id)arg3 ;
-(id)initWithPartnerIdentifier:(id)arg0 pairedReaderIdentifier:(id)arg1 recipientName:(id)arg2 entitlement:(NSUInteger)arg3 supportedRadioTechnologies:(NSUInteger)arg4 ;
-(id)invitationRequestRepresentation;
-(id)sharingConfigurationRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif