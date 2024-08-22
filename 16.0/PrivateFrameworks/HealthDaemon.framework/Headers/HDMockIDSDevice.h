// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMOCKIDSDEVICE_H
#define HDMOCKIDSDEVICE_H

@class NSString, NSArray, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDMockIDSDevice : NSObject <NSCopying>



@property (copy, nonatomic) NSString *backgroundAtrialFibrillationVersion; // ivar: _backgroundAtrialFibrillationVersion
@property (copy, nonatomic) NSString *buildType; // ivar: _buildType
@property (copy, nonatomic) NSString *electrocardiogramVersion; // ivar: _electrocardiogramVersion
@property (copy, nonatomic) NSArray *identities; // ivar: _identities
@property (nonatomic) BOOL isActive; // ivar: _isActive
@property (readonly, nonatomic) BOOL isDefaultPairedDevice;
@property (readonly, nonatomic) BOOL isLocallyPaired;
@property (copy, nonatomic) NSString *modelNumber; // ivar: _modelNumber
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSUUID *nanoRegistryPairingID; // ivar: _nanoRegistryPairingID
@property (retain, nonatomic) NSUUID *nsuuid; // ivar: _nsuuid
@property (copy, nonatomic) NSString *productBuildVersion; // ivar: _productBuildVersion
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (copy, nonatomic) NSString *regionCode; // ivar: _regionCode
@property (readonly, nonatomic) NSInteger relationship;
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) BOOL supportsCinnamonAntimonyGloryF; // ivar: _supportsCinnamonAntimonyGloryF
@property (nonatomic) BOOL supportsCinnamonHW; // ivar: _supportsCinnamonHW
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (copy, nonatomic) NSString *uniqueIDOverride; // ivar: _uniqueIDOverride


-(BOOL)hd_isEquivalentToDevice:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hd_destinationIdentifier;
-(id)hd_deviceIdentifier;
-(id)hd_shortDescription;


@end


#endif