// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PARENGAGEDCOMPLETIONCACHE_H
#define PARENGAGEDCOMPLETIONCACHE_H


#import <Foundation/Foundation.h>


@interface PAREngagedCompletionCache : NSObject



+(id)sharedInstance;
-(void)addCompletion:(id)arg0 forInput:(id)arg1 ;
-(void)addEngagedResults:(id)arg0 ;
-(void)clearAllCompletions;
-(void)clearAllEngagements;
-(void)clearCompletionsFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)clearEngagementsFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)clearEngagementsWithTitle:(id)arg0 ;
-(void)clearEngagementsWithTitle:(id)arg0 type:(int)arg1 ;
-(void)topEngagedResultsForInput:(id)arg0 maxAmount:(NSInteger)arg1 completion:(id)arg2 ;
-(void)updateParametersForSmartSearchV1:(id)arg0 smartSearchV2:(id)arg1 ;


@end


#endif