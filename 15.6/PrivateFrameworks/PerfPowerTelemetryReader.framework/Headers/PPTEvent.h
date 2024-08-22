// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPTEVENT_H
#define PPTEVENT_H

@class NSMutableDictionary, NSArray, NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTEvent : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *metrics;
}


@property (readonly) NSUInteger count;
@property (readonly) NSArray *metricKeys;
@property (readonly) NSDictionary *metricKeysAndValues;
@property (readonly) NSArray *metricValues;
@property (retain) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithTimestamp:(id)arg0 andDictionary:(id)arg1 ;
+(id)eventWithTimestamp:(id)arg0 andValues:(id)arg1 forKeys:(id)arg2 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 andDictionary:(id)arg1 ;
-(id)initWithTimestamp:(id)arg0 andValues:(id)arg1 forKeys:(id)arg2 ;
-(id)metricValueForKey:(id)arg0 ;
-(id)metricValuesForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeMetricValueForKey:(id)arg0 ;
-(void)setMetricValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif