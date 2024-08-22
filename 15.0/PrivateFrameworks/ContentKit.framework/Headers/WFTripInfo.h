// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFTRIPINFO_H
#define WFTRIPINFO_H

@class NSMeasurement, NSString;
@protocol NSSecureCoding, WFNaming;

#import <Foundation/Foundation.h>

#import "WFTimeInterval.h"

@interface WFTripInfo : NSObject <NSSecureCoding, WFNaming>



@property (readonly, nonatomic) NSMeasurement *distance; // ivar: _distance
@property (readonly, nonatomic) WFTimeInterval *expectedTravelTime; // ivar: _expectedTravelTime
@property (readonly, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMKRoute:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif