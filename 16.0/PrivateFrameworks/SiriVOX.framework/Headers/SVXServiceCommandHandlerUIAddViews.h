// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSERVICECOMMANDHANDLERUIADDVIEWS_H
#define SVXSERVICECOMMANDHANDLERUIADDVIEWS_H

@class NSString;
@protocol SVXServiceCommandHandling, MDModeProviding;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesizer.h"
#import "SVXModule.h"

@interface SVXServiceCommandHandlerUIAddViews : NSObject <SVXServiceCommandHandling>

 {
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXModule *_module;
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
-(id)initWithSpeechSynthesizer:(id)arg0 module:(id)arg1 modeProvider:(id)arg2 ;
-(void)handleAceView:(id)arg0 isExpository:(BOOL)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;
-(void)prepareToHandleCommand:(id)arg0 completion:(id)arg1 ;


@end


#endif