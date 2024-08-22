// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUNKNOWNBEACON_H
#define SPUNKNOWNBEACON_H

@class NSData, NSUUID, NSArray, NSDate, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"
#import "SPDiscoveredAccessoryMetadata.h"
#import "SPDiscoveredAccessoryProductInformation.h"

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *advertisement; // ivar: _advertisement
@property (nonatomic) NSInteger alertState; // ivar: _alertState
@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (copy, nonatomic) NSArray *beaconLocations; // ivar: _beaconLocations
@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (nonatomic) BOOL connected; // ivar: _connected
@property (copy, nonatomic) SPHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *ignoresUntilDate; // ivar: _ignoresUntilDate
@property (nonatomic) BOOL isAppleAudioAccessory; // ivar: _isAppleAudioAccessory
@property (nonatomic) BOOL isIgnored; // ivar: _isIgnored
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger observationType; // ivar: _observationType
@property (copy, nonatomic) SPDiscoveredAccessoryProductInformation *productInformation; // ivar: _productInformation
@property (copy, nonatomic) NSDictionary *taskInformation; // ivar: _taskInformation
@property (copy, nonatomic) NSDate *triggerDate; // ivar: _triggerDate
@property (copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif