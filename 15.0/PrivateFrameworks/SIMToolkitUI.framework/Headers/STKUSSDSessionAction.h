// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STKUSSDSESSIONACTION_H
#define STKUSSDSESSIONACTION_H



#import "STKSessionAction.h"
#import "STKUSSDSessionData.h"

@interface STKUSSDSessionAction : STKSessionAction

@property (readonly, nonatomic) STKUSSDSessionData *sessionData;


-(id)initWithInputData:(id)arg0 response:(id)arg1 ;
-(void)sendSuccessWithResponse:(id)arg0 ;


@end


#endif