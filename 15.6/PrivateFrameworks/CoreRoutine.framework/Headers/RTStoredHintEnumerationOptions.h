// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTSTOREDHINTENUMERATIONOPTIONS_H
#define RTSTOREDHINTENUMERATIONOPTIONS_H

@class NSDateInterval, NSNumber;
@protocol NSCopying, NSSecureCoding;


#import "RTEnumerationOptions.h"
#import "RTLocation.h"

@interface RTStoredHintEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding>

 {
    NSUInteger _batchSize;
}


@property (readonly, nonatomic) BOOL ascending; // ivar: _ascending
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) NSNumber *distance; // ivar: _distance
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (readonly, nonatomic) RTLocation *referenceLocation; // ivar: _referenceLocation
@property (readonly, nonatomic) NSNumber *sourceFilter; // ivar: _sourceFilter


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(Class)enumeratedType;
-(NSUInteger)batchSize;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReferenceLocation:(id)arg0 ascending:(BOOL)arg1 dateInterval:(id)arg2 limit:(NSUInteger)arg3 batchSize:(NSUInteger)arg4 ;
-(id)initWithReferenceLocation:(id)arg0 sourceFilter:(id)arg1 ascending:(BOOL)arg2 dateInterval:(id)arg3 limit:(NSUInteger)arg4 batchSize:(NSUInteger)arg5 ;
-(id)initWithReferenceLocation:(id)arg0 sourceFilter:(id)arg1 ascending:(BOOL)arg2 distance:(id)arg3 dateInterval:(id)arg4 limit:(NSUInteger)arg5 batchSize:(NSUInteger)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif