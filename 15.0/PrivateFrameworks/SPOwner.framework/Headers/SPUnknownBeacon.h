// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUNKNOWNBEACON_H
#define SPUNKNOWNBEACON_H

@class NSData, NSUUID, NSArray, NSDate, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPHandle.h"
#import "SPDiscoveredAccessoryMetadata.h"
#import "SPUnknownProductInfo.h"

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSData *advertisement; // ivar: _advertisement
@property (copy, nonatomic) NSUUID *beaconIdentifier; // ivar: _beaconIdentifier
@property (copy, nonatomic) NSArray *beaconLocations; // ivar: _beaconLocations
@property (copy, nonatomic) SPHandle *handle; // ivar: _handle
@property (copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (copy, nonatomic) NSDate *ignoresUntilDate; // ivar: _ignoresUntilDate
@property (nonatomic) BOOL isIgnored; // ivar: _isIgnored
@property (copy, nonatomic) SPDiscoveredAccessoryMetadata *metadata; // ivar: _metadata
@property (copy, nonatomic) SPUnknownProductInfo *productInfo; // ivar: _productInfo
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