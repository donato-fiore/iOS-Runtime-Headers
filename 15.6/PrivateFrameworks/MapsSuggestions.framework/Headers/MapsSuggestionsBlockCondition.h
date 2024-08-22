// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSUGGESTIONSBLOCKCONDITION_H
#define MAPSSUGGESTIONSBLOCKCONDITION_H

@protocol OS_dispatch_queue;


#import "MapsSuggestionsBaseCondition.h"

@interface MapsSuggestionsBlockCondition : MapsSuggestionsBaseCondition {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
}




-(BOOL)isTrue;
-(id)initWithName:(id)arg0 block:(id)arg1 ;
-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;


@end


#endif