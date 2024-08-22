// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDEVICECONTROLLERSTARTUPPARAMS_H
#define MTRDEVICECONTROLLERSTARTUPPARAMS_H

@class NSData, NSNumber;
@protocol MTRKeypair;

#import <Foundation/Foundation.h>


@interface MTRDeviceControllerStartupParams : NSObject

@property (readonly, nonatomic) NSUInteger fabricId; // ivar: _fabricId
@property (retain, nonatomic) NSData *intermediateCertificate; // ivar: _intermediateCertificate
@property (readonly, nonatomic) NSData *ipk; // ivar: _ipk
@property (readonly, nonatomic) NSObject<MTRKeypair> *nocSigner; // ivar: _nocSigner
@property (retain, nonatomic) NSNumber *nodeId; // ivar: _nodeId
@property (retain, nonatomic) NSData *operationalCertificate; // ivar: _operationalCertificate
@property (retain, nonatomic) NSObject<MTRKeypair> *operationalKeypair; // ivar: _operationalKeypair
@property (retain, nonatomic) NSData *rootCertificate; // ivar: _rootCertificate
@property (retain, nonatomic) NSNumber *vendorId; // ivar: _vendorId


-(id)initWithOperationalKeypair:(id)arg0 operationalCertificate:(id)arg1 intermediateCertificate:(id)arg2 rootCertificate:(id)arg3 ipk:(id)arg4 ;
-(id)initWithParams:(id)arg0 ;
-(id)initWithSigningKeypair:(id)arg0 fabricId:(NSUInteger)arg1 ipk:(id)arg2 ;


@end


#endif