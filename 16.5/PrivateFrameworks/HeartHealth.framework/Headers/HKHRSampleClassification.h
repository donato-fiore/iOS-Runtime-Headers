// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRSAMPLECLASSIFICATION_H
#define HKHRSAMPLECLASSIFICATION_H

@class NSDateInterval, NSTimeZone, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHRSampleClassification : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger classification; // ivar: _classification
@property (readonly, nonatomic) NSDateInterval *sampleDateInterval; // ivar: _sampleDateInterval
@property (readonly, nonatomic) NSTimeZone *sampleTimeZone; // ivar: _sampleTimeZone
@property (readonly, nonatomic) NSUUID *sampleUUID; // ivar: _sampleUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSampleUUID:(id)arg0 classification:(NSInteger)arg1 sampleDateInterval:(id)arg2 sampleTimeZone:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif