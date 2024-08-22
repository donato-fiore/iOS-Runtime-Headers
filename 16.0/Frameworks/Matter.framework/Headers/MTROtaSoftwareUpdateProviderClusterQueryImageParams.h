// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTROTASOFTWAREUPDATEPROVIDERCLUSTERQUERYIMAGEPARAMS_H
#define MTROTASOFTWAREUPDATEPROVIDERCLUSTERQUERYIMAGEPARAMS_H

@class NSNumber, NSString, NSData, NSArray;

#import <Foundation/Foundation.h>


@interface MTROtaSoftwareUpdateProviderClusterQueryImageParams : NSObject

@property (retain, nonatomic) NSNumber *hardwareVersion; // ivar: _hardwareVersion
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (retain, nonatomic) NSData *metadataForProvider; // ivar: _metadataForProvider
@property (retain, nonatomic) NSNumber *productId; // ivar: _productId
@property (retain, nonatomic) NSArray *protocolsSupported; // ivar: _protocolsSupported
@property (retain, nonatomic) NSNumber *requestorCanConsent; // ivar: _requestorCanConsent
@property (retain, nonatomic) NSNumber *softwareVersion; // ivar: _softwareVersion
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *vendorId; // ivar: _vendorId


-(id)description;
-(id)init;


@end


#endif