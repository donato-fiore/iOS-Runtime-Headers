// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPTEVENT_H
#define PPTEVENT_H

@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTEvent : NSObject <NSCopying, NSSecureCoding>



@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) CGFloat epochTimestamp;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly, copy) NSArray *metricValues;
@property (copy) NSMutableDictionary *metrics; // ivar: _metrics
@property (readonly) CGFloat monotonicTimestamp; // ivar: _monotonicTimestamp
@property (readonly) CGFloat timeOffset; // ivar: _timeOffset
@property (readonly) NSDate *timestamp;


+(BOOL)supportsSecureCoding;
+(id)eventWithMonotonicTimestamp:(CGFloat)arg0 timeOffset:(CGFloat)arg1 andDictionary:(id)arg2 ;
+(id)eventWithMonotonicTimestamp:(CGFloat)arg0 timeOffset:(CGFloat)arg1 andValues:(id)arg2 forKeys:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithMonotonicTimestamp:(CGFloat)arg0 timeOffset:(CGFloat)arg1 andDictionary:(id)arg2 ;
-(id)initWithMonotonicTimestamp:(CGFloat)arg0 timeOffset:(CGFloat)arg1 andValues:(id)arg2 forKeys:(id)arg3 ;
-(id)metricValueForKey:(id)arg0 ;
-(id)metricValuesForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif