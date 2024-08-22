// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUISFPERFORMINTENTEXECUTOR_H
#define SPUISFPERFORMINTENTEXECUTOR_H

@class NSString;
@protocol SearchUICommandProtocol;


#import "SPUICommandExecutor.h"

@interface SPUISFPerformIntentExecutor : SPUICommandExecutor <SearchUICommandProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)userActivityFromIntent:(id)arg0 ;
+(id)userActivityWithIntentMessageName:(id)arg0 intentMessageData:(id)arg1 ;
-(void)getUserActivityForCommand:(id)arg0 withHandler:(id)arg1 ;


@end


#endif