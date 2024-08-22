// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLOUDSYNCSHARDPREDICATE_H
#define HDCLOUDSYNCSHARDPREDICATE_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDCloudSyncShardPredicate : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)codablePredicate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForShardType:(int)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithCodableShardPredicate:(id)arg0 ;


@end


#endif