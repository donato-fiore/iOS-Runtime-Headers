// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRREPLAYRESULTSTAT_H
#define LRRREPLAYRESULTSTAT_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface LRRReplayResultStat : NSObject

@property (nonatomic) unsigned int evaluatedCount; // ivar: _evaluatedCount
@property (nonatomic) unsigned int mdRequestTrueCount; // ivar: _mdRequestTrueCount
@property (nonatomic) unsigned int mdResponseTrueCount; // ivar: _mdResponseTrueCount
@property (nonatomic) unsigned int mrRequestTrueCount; // ivar: _mrRequestTrueCount
@property (nonatomic) unsigned int mrResponseTrueCount; // ivar: _mrResponseTrueCount
@property (nonatomic) unsigned int nluResponseTrueCount; // ivar: _nluResponseTrueCount
@property (nonatomic) unsigned int topUserParseTrueCount; // ivar: _topUserParseTrueCount
@property (nonatomic) NSDictionary *userIsHabitualUserByWeek; // ivar: _userIsHabitualUserByWeek


-(id)init;
-(void)append:(id)arg0 ;


@end


#endif