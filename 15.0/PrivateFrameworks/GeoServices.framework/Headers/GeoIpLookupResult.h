// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOIPLOOKUPRESULT_H
#define GEOIPLOOKUPRESULT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface GeoIpLookupResult : NSObject

@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (readonly, nonatomic) ? latLong; // ivar: _latLong
@property (readonly, nonatomic) NSString *timeZone; // ivar: _timeZone


-(id)initWithGEOPDPlaceResponse:(id)arg0 ;


@end


#endif