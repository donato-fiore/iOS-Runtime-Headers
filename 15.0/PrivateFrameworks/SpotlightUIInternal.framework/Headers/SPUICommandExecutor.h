// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUICOMMANDEXECUTOR_H
#define SPUICOMMANDEXECUTOR_H


#import <Foundation/Foundation.h>

#import "SPUICommandEnvironment.h"

@interface SPUICommandExecutor : NSObject

@property (retain, nonatomic) SPUICommandEnvironment *commandEnvironment; // ivar: _commandEnvironment


+(id)commandExecutorForCommand:(id)arg0 environment:(id)arg1 ;
-(BOOL)canPerformCommand;
-(id)initWithCommand:(id)arg0 environment:(id)arg1 ;


@end


#endif