// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFASKFORINPUTINTENTHANDLER_H
#define WFASKFORINPUTINTENTHANDLER_H

@class NSString;
@protocol WFAskForInputIntentHandling;

#import <Foundation/Foundation.h>


@interface WFAskForInputIntentHandler : NSObject <WFAskForInputIntentHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL resolvedValue; // ivar: _resolvedValue
@property (readonly) Class superclass;


-(void)handleAskForInput:(id)arg0 completion:(id)arg1 ;
-(void)resolveDateAndTimeAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveDateAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveDefaultURLAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveNumberAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveQuestionForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveStringAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTimeAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveTypeForAskForInput:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveUrlAnswerForAskForInput:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif