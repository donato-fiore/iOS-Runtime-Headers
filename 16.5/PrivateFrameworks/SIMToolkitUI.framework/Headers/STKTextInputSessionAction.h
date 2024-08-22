// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKTEXTINPUTSESSIONACTION_H
#define STKTEXTINPUTSESSIONACTION_H



#import "STKSessionAction.h"
#import "STKTextInputSessionData.h"

@interface STKTextInputSessionAction : STKSessionAction

@property (readonly, nonatomic) STKTextInputSessionData *sessionData;


-(id)initWithBehavior:(id)arg0 inputData:(id)arg1 response:(id)arg2 ;
-(void)sendSuccessWithResponse:(id)arg0 ;


@end


#endif