// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDHANDLERUIDELAYEDACTIONCOMMAND_H
#define SVXSERVICECOMMANDHANDLERUIDELAYEDACTIONCOMMAND_H

@class NSString;
@protocol SVXServiceCommandHandling, SVXPerforming;

#import <Foundation/Foundation.h>

#import "SVXServiceCommandDelayedActionStore.h"
#import "SVXSessionManager.h"

@interface SVXServiceCommandHandlerUIDelayedActionCommand : NSObject <SVXServiceCommandHandling>

 {
    SVXServiceCommandDelayedActionStore *_delayedActionStore;
    SVXSessionManager *_sessionManager;
    id<SVXPerforming> *_performer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(id)initWithDelayedActionStore:(id)arg0 sessionManager:(id)arg1 performer:(id)arg2 ;
-(void)_performDelayedAction:(id)arg0 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;


@end


#endif