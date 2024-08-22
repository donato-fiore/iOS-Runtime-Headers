// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVTIMEDOBJECT_H
#define PVTIMEDOBJECT_H

@protocol NSSecureCoding, NSCopying, NSSecureCoding><NSCopying;

#import <Foundation/Foundation.h>


@interface PVTimedObject : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSObject<NSSecureCoding><NSCopying> *object; // ivar: _object
@property (nonatomic) ? time; // ivar: _time


+(BOOL)supportsSecureCoding;
+(id)findTimedObjectInSortedArray:(id)arg0 atTime:(struct ? )arg1 returnFirstObjectForTimeBeforeFirst:(BOOL)arg2 returnLastObjectForTimeAfterLast:(BOOL)arg3 ;
+(id)timedObjectWithTime:(struct ? )arg0 ;
+(id)timedObjectWithTime:(struct ? )arg0 object:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(id)initWithTime:(struct ? )arg0 ;
-(id)initWithTime:(struct ? )arg0 object:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif