// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTEVENT_H
#define PPTEVENT_H

@class NSMutableDictionary, NSString, NSDictionary, NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PPTEvent : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_metrics;
}


@property (readonly) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *metricKeys;
@property (readonly, copy) NSDictionary *metricKeysAndValues;
@property (readonly, copy) NSArray *metricValues;
@property (readonly) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)eventWithTimestamp:(id)arg0 andDictionary:(id)arg1 ;
+(id)eventWithTimestamp:(id)arg0 andValues:(id)arg1 forKeys:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEvent:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)JSONRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)initWithTimestamp:(id)arg0 andDictionary:(id)arg1 ;
-(id)initWithTimestamp:(id)arg0 andValues:(id)arg1 forKeys:(id)arg2 ;
-(id)metricValueForKey:(id)arg0 ;
-(id)metricValuesForKeys:(id)arg0 notFoundMarker:(id)arg1 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif