// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKTOKENACCESSUSERPROMPTNOOP_H
#define TKTOKENACCESSUSERPROMPTNOOP_H

@class NSString;
@protocol TKTokenAccessUserPrompt;

#import <Foundation/Foundation.h>


@interface TKTokenAccessUserPromptNoop : NSObject <TKTokenAccessUserPrompt>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger preflightStatus; // ivar: _preflightStatus
@property (readonly) Class superclass;


-(NSInteger)promptUserToEvaluateRequest:(id)arg0 error:(*id)arg1 ;
-(id)initWithPreflightStatus:(NSInteger)arg0 ;


@end


#endif