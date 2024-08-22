// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXAGGREGATEDAPPLAUNCHDATA_H
#define ATXAGGREGATEDAPPLAUNCHDATA_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ATXAggregatedAppLaunchData : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger rawLaunchCount; // ivar: _rawLaunchCount
@property (readonly, nonatomic) NSUInteger uniqueDaysLaunched; // ivar: _uniqueDaysLaunched


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRawLaunchCount:(NSUInteger)arg0 uniqueDaysLaunched:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif