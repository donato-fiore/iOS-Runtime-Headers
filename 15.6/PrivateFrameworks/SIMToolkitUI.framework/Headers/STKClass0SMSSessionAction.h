// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKCLASS0SMSSESSIONACTION_H
#define STKCLASS0SMSSESSIONACTION_H



#import "STKSessionAction.h"
#import "STKClass0SMSSessionData.h"

@interface STKClass0SMSSessionAction : STKSessionAction

@property (readonly, nonatomic) STKClass0SMSSessionData *sessionData;


-(id)initWithInputData:(id)arg0 response:(id)arg1 ;


@end


#endif