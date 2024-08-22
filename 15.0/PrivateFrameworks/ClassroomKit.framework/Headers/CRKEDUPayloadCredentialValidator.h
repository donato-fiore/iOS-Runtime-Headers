// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKEDUPAYLOADCREDENTIALVALIDATOR_H
#define CRKEDUPAYLOADCREDENTIALVALIDATOR_H


#import <Foundation/Foundation.h>

#import "CRKEDUPayload.h"

@interface CRKEDUPayloadCredentialValidator : NSObject

@property (readonly, nonatomic, getter=isEphemeralMultiUserDevice) BOOL ephemeralMultiUserDevice; // ivar: _ephemeralMultiUserDevice
@property (readonly, nonatomic) CRKEDUPayload *payload; // ivar: _payload
@property (readonly, nonatomic, getter=isStub) BOOL stub; // ivar: _stub


-(BOOL)areCredentialsValidForOneToOneDeviceWithError:(*id)arg0 ;
-(BOOL)areCredentialsValidForSharediPadDeviceWithError:(*id)arg0 ;
-(BOOL)areCredentialsValidWithError:(*id)arg0 ;
-(BOOL)hasPayloadCertificate;
-(BOOL)isInstructor;
-(BOOL)isStudent;
-(BOOL)validateAnchorsWithKeyPath:(id)arg0 payloadKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateLeaderAnchorsWithError:(*id)arg0 ;
-(BOOL)validateMemberAnchorsWithError:(*id)arg0 ;
-(id)initWithPayload:(id)arg0 isStub:(BOOL)arg1 isEphemeralMultiUserDevice:(BOOL)arg2 ;


@end


#endif