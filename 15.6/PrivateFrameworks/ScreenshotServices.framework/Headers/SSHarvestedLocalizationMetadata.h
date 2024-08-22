// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSHARVESTEDLOCALIZATIONMETADATA_H
#define SSHARVESTEDLOCALIZATIONMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SSHarvestedApplicationMetadata.h"
#import "SSHarvestedDeviceMetadata.h"

@interface SSHarvestedLocalizationMetadata : NSObject

@property (readonly, nonatomic) SSHarvestedApplicationMetadata *applicationMetadata; // ivar: _applicationMetadata
@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) SSHarvestedDeviceMetadata *deviceMetadata; // ivar: _deviceMetadata


-(id)_runningAppInformation;
-(id)embeddedInImageData:(id)arg0 ;
-(id)initFromDeviceMetadata:(id)arg0 applicationMetadata:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)jsonEncodedData;
-(id)jsonEncodedString;
-(id)propertiesForImageData:(id)arg0 ;


@end


#endif