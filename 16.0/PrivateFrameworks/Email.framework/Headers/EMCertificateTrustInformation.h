// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCERTIFICATETRUSTINFORMATION_H
#define EMCERTIFICATETRUSTINFORMATION_H

@class NSString, NSArray, ECSecureMIMETrustEvaluation;
@protocol EFLoggable, NSSecureCoding, ECEmailAddressConvertible;

#import <Foundation/Foundation.h>


@interface EMCertificateTrustInformation : NSObject <EFLoggable, NSSecureCoding>



@property (nonatomic) BOOL _forceNetworkAccessAllowed; // ivar: __forceNetworkAccessAllowed
@property (readonly, nonatomic) *__SecCertificate certificate;
@property (nonatomic) NSUInteger certificateType; // ivar: _certificateType
@property (readonly, copy, nonatomic) NSString *commonName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSObject<ECEmailAddressConvertible> *firstEmailAddress;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sender; // ivar: _sender
@property (readonly) Class superclass;
@property (nonatomic) *__SecTrust trust; // ivar: _trust
@property (retain, nonatomic) ECSecureMIMETrustEvaluation *trustEvaluation; // ivar: _trustEvaluation


+(BOOL)supportsSecureCoding;
+(id)log;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrust:(struct __SecTrust *)arg0 certificateType:(NSUInteger)arg1 sender:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateTrustWithOptions:(NSUInteger)arg0 ;
-(void)reevaluateTrustWithNetworkAccessAllowed;


@end


#endif