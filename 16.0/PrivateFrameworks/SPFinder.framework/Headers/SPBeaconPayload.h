// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONPAYLOAD_H
#define SPBEACONPAYLOAD_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SPAdvertisement.h"
#import "SPEstimatedLocation.h"

@interface SPBeaconPayload : NSObject <NSSecureCoding>



@property (retain, nonatomic) SPAdvertisement *advertisement; // ivar: _advertisement
@property (copy, nonatomic) SPEstimatedLocation *location; // ivar: _location
@property (nonatomic) NSInteger observationValue; // ivar: _observationValue
@property (nonatomic) BOOL refreshGeotag; // ivar: _refreshGeotag


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAdvertisement:(id)arg0 location:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif