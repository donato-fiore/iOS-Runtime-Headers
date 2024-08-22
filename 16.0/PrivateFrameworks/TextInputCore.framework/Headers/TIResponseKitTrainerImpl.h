// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIRESPONSEKITTRAINERIMPL_H
#define TIRESPONSEKITTRAINERIMPL_H

@protocol TIResponseKitTrainer;

#import <Foundation/Foundation.h>


@interface TIResponseKitTrainerImpl : NSObject <TIResponseKitTrainer>





+(id)sharedTrainer;
-(BOOL)moveLanguageModelBundlesFromTemporaryDirectory:(id)arg0 toDestination:(id)arg1 error:(*id)arg2 ;
-(id)_init;
-(void)performTrainingForClient:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif