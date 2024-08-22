// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICECONTROLLERSTARTUPPARAMS_H
#define MTRDEVICECONTROLLERSTARTUPPARAMS_H

@class NSNumber, NSData;
@protocol MTRKeypair, MTROperationalCertificateIssuer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MTRDeviceControllerStartupParams : NSObject

@property (readonly, copy, nonatomic) NSNumber *fabricID; // ivar: _fabricID
@property (readonly, nonatomic) NSUInteger fabricId;
@property (copy, nonatomic) NSData *intermediateCertificate; // ivar: _intermediateCertificate
@property (readonly, copy, nonatomic) NSData *ipk; // ivar: _ipk
@property (readonly, copy, nonatomic) NSObject<MTRKeypair> *nocSigner; // ivar: _nocSigner
@property (copy, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (copy, nonatomic) NSNumber *nodeId;
@property (copy, nonatomic) NSData *operationalCertificate; // ivar: _operationalCertificate
@property (retain, nonatomic) NSObject<MTROperationalCertificateIssuer> *operationalCertificateIssuer; // ivar: _operationalCertificateIssuer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationalCertificateIssuerQueue; // ivar: _operationalCertificateIssuerQueue
@property (retain, nonatomic) NSObject<MTRKeypair> *operationalKeypair; // ivar: _operationalKeypair
@property (copy, nonatomic) NSData *rootCertificate; // ivar: _rootCertificate
@property (copy, nonatomic) NSNumber *vendorID; // ivar: _vendorID
@property (copy, nonatomic) NSNumber *vendorId;


-(id)initWithIPK:(id)arg0 fabricID:(id)arg1 nocSigner:(id)arg2 ;
-(id)initWithIPK:(id)arg0 operationalKeypair:(id)arg1 operationalCertificate:(id)arg2 intermediateCertificate:(id)arg3 rootCertificate:(id)arg4 ;
-(id)initWithOperationalKeypair:(id)arg0 operationalCertificate:(id)arg1 intermediateCertificate:(id)arg2 rootCertificate:(id)arg3 ipk:(id)arg4 ;
-(id)initWithParams:(id)arg0 ;
-(id)initWithSigningKeypair:(id)arg0 fabricId:(NSUInteger)arg1 ipk:(id)arg2 ;


@end


#endif