// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSYNCPREDICATE_H
#define HDSYNCPREDICATE_H

@class NSDateInterval, NSNumber, NSSet, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HDSyncPredicate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumObjectAge; // ivar: _defaultMaximumObjectAge
@property (readonly, copy, nonatomic) NSNumber *defaultMaximumTombstoneAge; // ivar: _defaultMaximumTombstoneAge
@property (readonly, copy, nonatomic) NSSet *excludedSyncProvenances; // ivar: _excludedSyncProvenances
@property (readonly, copy, nonatomic) NSSet *includedObjectTypes; // ivar: _includedObjectTypes
@property (readonly, copy, nonatomic) NSDictionary *maximumObjectAgeByType; // ivar: _maximumObjectAgeByType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExcludedSyncProvenances:(id)arg0 dateInterval:(id)arg1 includedObjectTypes:(id)arg2 defaultMaximumObjectAge:(id)arg3 defaultMaximumTombstoneAge:(id)arg4 maximumObjectAgeByType:(id)arg5 ;
-(id)maximumObjectAgeForType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif