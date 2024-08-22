// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMBEHAVIORDATABASEMETADATA_H
#define BMBEHAVIORDATABASEMETADATA_H

@class NSDateInterval, NSArray, NSDate;

#import <Foundation/Foundation.h>


@interface BMBehaviorDatabaseMetadata : NSObject

@property (readonly, copy, nonatomic) NSDateInterval *eventInterval; // ivar: _eventInterval
@property (readonly, nonatomic) NSArray *itemTypeIdentifiers; // ivar: _itemTypeIdentifiers
@property (readonly, nonatomic) NSUInteger minimumAbsoluteSupport; // ivar: _minimumAbsoluteSupport
@property (readonly, nonatomic) CGFloat minimumConfidence; // ivar: _minimumConfidence
@property (readonly, copy, nonatomic) NSDate *miningDate; // ivar: _miningDate
@property (readonly, nonatomic) NSUInteger numberOfBaskets; // ivar: _numberOfBaskets
@property (readonly, nonatomic) CGFloat samplingInterval; // ivar: _samplingInterval
@property (readonly, nonatomic) NSArray *targetTypeIdentifiers; // ivar: _targetTypeIdentifiers


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresntation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMiningDate:(id)arg0 eventInterval:(id)arg1 minimumAbsoluteSupport:(NSUInteger)arg2 minimumConfidence:(CGFloat)arg3 samplingInterval:(CGFloat)arg4 itemTypeIdentifiers:(id)arg5 targetTypeIdentifiers:(id)arg6 numberOfBaskets:(NSUInteger)arg7 ;


@end


#endif