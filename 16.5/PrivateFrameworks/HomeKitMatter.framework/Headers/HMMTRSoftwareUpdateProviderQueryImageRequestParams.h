// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMMTRSOFTWAREUPDATEPROVIDERQUERYIMAGEREQUESTPARAMS_H
#define HMMTRSOFTWAREUPDATEPROVIDERQUERYIMAGEREQUESTPARAMS_H

@class NSNumber, NSString, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface HMMTRSoftwareUpdateProviderQueryImageRequestParams : NSObject

@property (readonly) NSNumber *hardwareVersion; // ivar: _hardwareVersion
@property (readonly) NSString *location; // ivar: _location
@property (readonly) NSData *metadataForProvider; // ivar: _metadataForProvider
@property (readonly) NSNumber *productId; // ivar: _productId
@property (readonly) NSArray *protocolsSupported; // ivar: _protocolsSupported
@property (readonly) NSNumber *requestorCanConsent; // ivar: _requestorCanConsent
@property (readonly) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (readonly) NSNumber *vendorId; // ivar: _vendorId


-(id)initWithVendorID:(id)arg0 productId:(id)arg1 softwareVersion:(id)arg2 protocolsSupported:(id)arg3 hardwareVersion:(id)arg4 location:(id)arg5 requestorCanConsent:(id)arg6 metadataForProvider:(id)arg7 ;


@end


#endif