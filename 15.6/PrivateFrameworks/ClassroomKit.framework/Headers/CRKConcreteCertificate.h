// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCONCRETECERTIFICATE_H
#define CRKCONCRETECERTIFICATE_H

@class NSArray, NSData, NSString, NSDateInterval;
@protocol CRKCertificate;

#import <Foundation/Foundation.h>


@interface CRKConcreteCertificate : NSObject <CRKCertificate>



@property (readonly, nonatomic, getter=isCertificateAuthority) BOOL certificateAuthority;
@property (readonly, copy, nonatomic) NSArray *commonNames;
@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *fingerprint;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int hashingAlgorithm;
@property (readonly, nonatomic) NSInteger keySizeInBits;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTemporallyValid) BOOL temporallyValid;
@property (readonly, nonatomic) *__SecCertificate underlyingCertificate; // ivar: _underlyingCertificate
@property (readonly, nonatomic) NSDateInterval *validityDateInterval;


+(id)certificateWithData:(id)arg0 ;
-(id)initWithCertificate:(struct __SecCertificate *)arg0 ;
-(void)dealloc;


@end


#endif