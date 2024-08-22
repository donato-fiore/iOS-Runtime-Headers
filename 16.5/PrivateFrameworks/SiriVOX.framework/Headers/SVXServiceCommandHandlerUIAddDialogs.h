// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDHANDLERUIADDDIALOGS_H
#define SVXSERVICECOMMANDHANDLERUIADDDIALOGS_H

@class NSDictionary, NSString;
@protocol SVXServiceCommandHandling, MDModeProviding;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandHandlerUIAddDialogs : NSObject <SVXServiceCommandHandling>

 {
    NSDictionary *_handlersByCommandType;
    id<MDModeProviding> *_modeProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(BOOL)shouldDependOnCommand:(id)arg0 ;
-(id)initWithHandlers:(id)arg0 modeProvider:(id)arg1 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;
-(void)prepareToHandleCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif