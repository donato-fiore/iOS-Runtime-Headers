// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKTEXTSESSIONACTION_H
#define STKTEXTSESSIONACTION_H



#import "STKSessionAction.h"
#import "STKTextSessionData.h"

@interface STKTextSessionAction : STKSessionAction

@property (readonly, nonatomic) STKTextSessionData *sessionData;


-(id)initWithBehavior:(id)arg0 inputData:(id)arg1 response:(id)arg2 ;


@end


#endif