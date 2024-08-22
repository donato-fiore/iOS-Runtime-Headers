// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPACCESSORYID_H
#define UARPACCESSORYID_H

@class NSDate, NSString, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface UARPAccessoryID : NSObject <NSCopying, NSSecureCoding>

 {
    NSDate *_lastAddedDate;
    NSString *_countryCode;
    NSUUID *_uuid;
    NSUInteger _capability;
}


@property BOOL autoDownloadAllowed; // ivar: _autoDownloadAllowed
@property (readonly) NSUInteger capability;
@property BOOL downloadOnCellularAllowed; // ivar: _downloadOnCellularAllowed
@property (readonly) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (readonly) NSString *hwFusingType; // ivar: _hwFusingType
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *modelName; // ivar: _modelName
@property (readonly) NSString *modelNumber; // ivar: _modelNumber
@property (readonly) NSString *productGroup; // ivar: _productGroup
@property (readonly) NSString *productNumber; // ivar: _productNumber
@property (readonly) NSString *serialNumber; // ivar: _serialNumber
@property (readonly) NSString *stagedFirmwareVersion; // ivar: _stagedFirmwareVersion
@property NSInteger transport; // ivar: _transport


+(BOOL)supportsSecureCoding;
-(BOOL)analyticsIsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shareAnalyticsEventsWithThirdParty;
-(NSUInteger)hash;
-(char *)assetAvailabilityUpdateNotification;
-(char *)supplementalAssetAvailabilityUpdateNotification;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countryCode;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithManufacturer:(id)arg0 modelName:(id)arg1 serialNumber:(id)arg2 firmwareVersion:(id)arg3 ;
-(id)initWithManufacturer:(id)arg0 modelName:(id)arg1 serialNumber:(id)arg2 firmwareVersion:(id)arg3 productGroup:(id)arg4 productNumber:(id)arg5 ;
-(id)initWithModelNumber:(id)arg0 ;
-(id)initWithProductGroup:(id)arg0 productNumber:(id)arg1 ;
-(id)initWithoutUUID;
-(id)uuid;
-(void)encodeWithCoder:(id)arg0 ;
-(void)initCountryCode;
-(void)setCountryCode:(id)arg0 ;
-(void)setUuid:(id)arg0 ;


@end


#endif