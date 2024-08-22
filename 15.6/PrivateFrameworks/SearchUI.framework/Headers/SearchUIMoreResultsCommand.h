// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMORERESULTSCOMMAND_H
#define SEARCHUIMORERESULTSCOMMAND_H



#import "SearchUITapCommand.h"

@interface SearchUIMoreResultsCommand : SearchUITapCommand



+(BOOL)supportsRowModel:(id)arg0 environment:(id)arg1 ;
-(NSUInteger)destination;
-(void)performCommandWithCompletion:(id)arg0 ;


@end


#endif