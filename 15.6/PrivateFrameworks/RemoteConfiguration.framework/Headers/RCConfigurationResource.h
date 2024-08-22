// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCCONFIGURATIONRESOURCE_H
#define RCCONFIGURATIONRESOURCE_H

@class NSData, NSString, NSNumber, NSDate, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "RCUserSegmentationConfiguration.h"

@interface RCConfigurationResource : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *configurationData;
@property (retain, nonatomic) NSString *configurationID; // ivar: _configurationID
@property (retain, nonatomic) NSString *contentHash; // ivar: _contentHash
@property (retain, nonatomic) NSNumber *endpointMaxAge; // ivar: _endpointMaxAge
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (retain, nonatomic) NSNumber *fallbackMaxAge; // ivar: _fallbackMaxAge
@property (retain, nonatomic) NSData *gzippedConfigurationData; // ivar: _gzippedConfigurationData
@property (retain, nonatomic) NSDate *lastFetchedDate; // ivar: _lastFetchedDate
@property (retain, nonatomic) NSString *lastModifiedFallbackString; // ivar: _lastModifiedFallbackString
@property (retain, nonatomic) NSString *lastModifiedString; // ivar: _lastModifiedString
@property (retain, nonatomic) NSString *requestKey; // ivar: _requestKey
@property (retain, nonatomic) NSArray *segmentSetIDs; // ivar: _segmentSetIDs
@property (retain, nonatomic) NSArray *treatmentIDs; // ivar: _treatmentIDs
@property (retain, nonatomic) RCUserSegmentationConfiguration *userSegmentationConfiguration; // ivar: _userSegmentationConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpiredWithMaxTTL:(CGFloat)arg0 allowedToReachEndpoint:(BOOL)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif