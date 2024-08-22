// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASUGGESTIONGENERATIONTASK_H
#define PHASUGGESTIONGENERATIONTASK_H

@class NSString, NSDictionary;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHASuggestionGenerationTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (retain, nonatomic) NSDictionary *suggestionOptionsDictionary; // ivar: _suggestionOptionsDictionary
@property (readonly) Class superclass;


-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 reply:(id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(unsigned char)suggestionProfileFromSuggestionType:(unsigned short)arg0 subtype:(unsigned short)arg1 ;


@end


#endif