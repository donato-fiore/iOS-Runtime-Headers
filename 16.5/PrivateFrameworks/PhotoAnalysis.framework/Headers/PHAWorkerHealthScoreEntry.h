// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWORKERHEALTHSCOREENTRY_H
#define PHAWORKERHEALTHSCOREENTRY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PHAWorkerHealthScoreEntry : NSObject

@property (readonly, copy, nonatomic) NSDate *dateRecorded; // ivar: _dateRecorded
@property (readonly, nonatomic) float score; // ivar: _score


-(id)initWithScore:(float)arg0 ;


@end


#endif