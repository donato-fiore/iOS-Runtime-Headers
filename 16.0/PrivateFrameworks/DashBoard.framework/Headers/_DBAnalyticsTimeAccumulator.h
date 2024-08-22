// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DBANALYTICSTIMEACCUMULATOR_H
#define _DBANALYTICSTIMEACCUMULATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _DBAnalyticsTimeAccumulator : NSObject

@property (retain, nonatomic) NSMutableDictionary *accumulatedTimeStorage; // ivar: _accumulatedTimeStorage
@property (retain, nonatomic) NSMutableDictionary *dateStorage; // ivar: _dateStorage


-(BOOL)isAccumulatingTimeForAnyKey;
-(BOOL)isAccumulatingTimeForKey:(id)arg0 ;
-(CGFloat)accumulatedTimeForKey:(id)arg0 ;
-(id)init;
-(void)startCountingTimeForKey:(id)arg0 ;
-(void)stopCountingTimeForAllKeys;
-(void)stopCountingTimeForKey:(id)arg0 ;


@end


#endif