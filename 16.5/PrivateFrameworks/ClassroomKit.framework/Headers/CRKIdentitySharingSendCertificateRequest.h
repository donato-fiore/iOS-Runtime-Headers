// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKIDENTITYSHARINGSENDCERTIFICATEREQUEST_H
#define CRKIDENTITYSHARINGSENDCERTIFICATEREQUEST_H

@class CATTaskRequest, NSData, NSSet;



@interface CRKIdentitySharingSendCertificateRequest : CATTaskRequest

@property (retain, nonatomic) NSData *activeCertificateData; // ivar: _activeCertificateData
@property (retain, nonatomic) NSSet *recipients; // ivar: _recipients
@property (retain, nonatomic) NSData *stagedCertificateData; // ivar: _stagedCertificateData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif