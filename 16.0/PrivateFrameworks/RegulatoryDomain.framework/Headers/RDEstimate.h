// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RDESTIMATE_H
#define RDESTIMATE_H

@class NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RDEstimate : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _priority;
}


@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)currentEstimateSet;
+(id)currentEstimates;
+(id)lastKnownEstimateSet;
+(id)lastKnownEstimates;
-(NSInteger)getPriority;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCountryCode:(id)arg0 priority:(NSInteger)arg1 timestamp:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif