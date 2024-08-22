// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICECONTROLLERFACTORYPARAMS_H
#define MTRDEVICECONTROLLERFACTORYPARAMS_H

@class NSArray, NSNumber;
@protocol MTROTAProviderDelegate, MTRStorage;

#import <Foundation/Foundation.h>


@interface MTRDeviceControllerFactoryParams : NSObject

@property (copy, nonatomic) NSArray *certificationDeclarationCertificates; // ivar: _certificationDeclarationCertificates
@property (retain, nonatomic) NSObject<MTROTAProviderDelegate> *otaProviderDelegate; // ivar: _otaProviderDelegate
@property (copy, nonatomic) NSNumber *port; // ivar: _port
@property (copy, nonatomic) NSArray *productAttestationAuthorityCertificates; // ivar: _productAttestationAuthorityCertificates
@property (nonatomic) BOOL shouldStartServer; // ivar: _shouldStartServer
@property (readonly, nonatomic) NSObject<MTRStorage> *storage; // ivar: _storage


-(id)initWithStorage:(id)arg0 ;


@end


#endif