// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKTOKENACCESSREGISTRY_H
#define TKTOKENACCESSREGISTRY_H

@protocol TKTokenAccessDB, TKTokenAccessUserPrompt;

#import <Foundation/Foundation.h>


@interface TKTokenAccessRegistry : NSObject {
    id<TKTokenAccessDB> *_accessDB;
    id<TKTokenAccessUserPrompt> *_prompt;
}




-(BOOL)_isPersistenceEnabled;
-(BOOL)_platformAllowsAllRequests;
-(BOOL)_shouldAutomaticallyAllowRequest:(id)arg0 ;
-(BOOL)evaluateRequest:(id)arg0 error:(*id)arg1 ;
-(NSInteger)_fetchAccessForRequest:(id)arg0 ;
-(NSInteger)_promptUserToEvaluateRequest:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAccessDB:(id)arg0 userPrompt:(id)arg1 ;
-(void)_storeAccess:(NSInteger)arg0 forRequest:(id)arg1 ;
-(void)setAccessDB:(id)arg0 ;
-(void)setUserPrompt:(id)arg0 ;


@end


#endif