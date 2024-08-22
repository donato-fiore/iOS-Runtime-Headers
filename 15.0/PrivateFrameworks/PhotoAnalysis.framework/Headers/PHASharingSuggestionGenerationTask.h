// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASHARINGSUGGESTIONGENERATIONTASK_H
#define PHASHARINGSUGGESTIONGENERATIONTASK_H

@class NSDictionary;


#import "PHASuggestionGenerationTask.h"

@interface PHASharingSuggestionGenerationTask : PHASuggestionGenerationTask {
    NSDictionary *_suggestionOptionsDictionary;
}




-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 reply:(id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)name;
-(id)suggestionOptionsDictionary;
-(void)setSuggestionOptionsDictionary:(id)arg0 ;


@end


#endif