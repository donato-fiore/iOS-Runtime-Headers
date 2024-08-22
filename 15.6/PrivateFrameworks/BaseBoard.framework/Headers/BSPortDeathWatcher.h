// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSPORTDEATHWATCHER_H
#define BSPORTDEATHWATCHER_H



#import "BSPortDeathSentinel.h"

@interface BSPortDeathWatcher : BSPortDeathSentinel



-(id)initWithPort:(unsigned int)arg0 queue:(id)arg1 deathHandler:(id)arg2 ;
-(id)initWithSendRight:(id)arg0 queue:(id)arg1 deathHandler:(id)arg2 ;


@end


#endif