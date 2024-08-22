// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPCOALESCEDSCOREDTOPIC_H
#define PPCOALESCEDSCOREDTOPIC_H

@class PPScoredItem;

#import <Foundation/Foundation.h>


@interface PPCoalescedScoredTopic : NSObject

@property (readonly, nonatomic) unsigned short occurrencesInSource; // ivar: _occurrencesInSource
@property (readonly, nonatomic) PPScoredItem *scoredTopic; // ivar: _scoredTopic


-(id)init;
-(id)initWithScoredTopic:(id)arg0 occurrencesInSource:(unsigned short)arg1 ;


@end


#endif