// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUISFINVOKESIRIEXECUTOR_H
#define SPUISFINVOKESIRIEXECUTOR_H

@class NSString;
@protocol SearchUICommandProtocol;


#import "SPUICommandExecutor.h"

@interface SPUISFInvokeSiriExecutor : SPUICommandExecutor <SearchUICommandProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)invokeSiriWithUtteranceText:(id)arg0 source:(NSInteger)arg1 ;
-(void)performCommand:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif