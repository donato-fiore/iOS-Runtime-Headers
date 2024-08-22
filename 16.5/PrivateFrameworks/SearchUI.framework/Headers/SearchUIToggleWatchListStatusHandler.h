// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUITOGGLEWATCHLISTSTATUSHANDLER_H
#define SEARCHUITOGGLEWATCHLISTSTATUSHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIToggleWatchListStatusHandler : SearchUICommandHandler



+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(BOOL)shouldDeselectAfterExecution;
-(NSUInteger)destination;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif