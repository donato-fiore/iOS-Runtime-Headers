// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIOPENCALCULATIONHANDLER_H
#define SEARCHUIOPENCALCULATIONHANDLER_H

@class SFOpenCalculationCommand;


#import "SearchUICommandHandler.h"

@interface SearchUIOpenCalculationHandler : SearchUICommandHandler

@property (retain) SFOpenCalculationCommand *command;


-(BOOL)supportsCopy;
-(id)itemProviderForCopy;
-(void)performCommand:(id)arg0 triggerEvent:(NSUInteger)arg1 environment:(id)arg2 ;


@end


#endif