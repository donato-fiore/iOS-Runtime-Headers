// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRFABRICINFO_H
#define MTRFABRICINFO_H

@class NSNumber, NSData, NSString;

#import <Foundation/Foundation.h>


@interface MTRFabricInfo : NSObject

@property (readonly, nonatomic) NSNumber *fabricID; // ivar: _fabricID
@property (readonly, nonatomic) NSNumber *fabricIndex; // ivar: _fabricIndex
@property (readonly, nonatomic) NSData *intermediateCertificate; // ivar: _intermediateCertificate
@property (readonly, nonatomic) NSData *intermediateCertificateTLV; // ivar: _intermediateCertificateTLV
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSNumber *nodeID; // ivar: _nodeID
@property (readonly, nonatomic) NSData *operationalCertificate; // ivar: _operationalCertificate
@property (readonly, nonatomic) NSData *operationalCertificateTLV; // ivar: _operationalCertificateTLV
@property (readonly, nonatomic) NSData *rootCertificate; // ivar: _rootCertificate
@property (readonly, nonatomic) NSData *rootCertificateTLV; // ivar: _rootCertificateTLV
@property (readonly, nonatomic) NSData *rootPublicKey; // ivar: _rootPublicKey
@property (readonly, nonatomic) NSNumber *vendorID; // ivar: _vendorID


-(id)initWithFabricTable:(*void)arg0 fabricInfo:(*void)arg1 ;


@end


#endif