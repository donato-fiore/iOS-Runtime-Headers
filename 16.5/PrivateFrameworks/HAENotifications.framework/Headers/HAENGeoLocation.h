// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENGEOLOCATION_H
#define HAENGEOLOCATION_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface HAENGeoLocation : NSObject

@property (readonly, nonatomic) NSString *countryCode; // ivar: countryCode
@property (readonly, nonatomic) NSString *immutableDescription; // ivar: immutableDescription
@property (readonly, nonatomic) unsigned int source; // ivar: source
@property (readonly, nonatomic) unsigned int sourceDevice; // ivar: sourceDevice
@property (readonly, nonatomic) NSDate *timestamp; // ivar: timestamp


-(id)describeSource;
-(id)description;
-(id)init;
-(void)fetchGeoLocation;


@end


#endif