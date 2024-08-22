// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISHOWCARDHANDLER_H
#define SEARCHUISHOWCARDHANDLER_H



#import "SearchUICommandHandler.h"

@interface SearchUIShowCardHandler : SearchUICommandHandler



+(id)fallbackCommandForRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(id)createViewControllerForCommand:(id)arg0 environment:(id)arg1 ;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;
-(void)prepareViewController:(id)arg0 forTriggerEvent:(NSUInteger)arg1 ;


@end


#endif