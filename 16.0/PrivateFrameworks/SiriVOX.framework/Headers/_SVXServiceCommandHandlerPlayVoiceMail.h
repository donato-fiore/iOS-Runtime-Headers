// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSERVICECOMMANDHANDLERPLAYVOICEMAIL_H
#define _SVXSERVICECOMMANDHANDLERPLAYVOICEMAIL_H

@class NSString;
@protocol SVXServiceCommandHandling;

#import <Foundation/Foundation.h>

#import "SVXSessionManager.h"
#import "SVXModule.h"

@interface _SVXServiceCommandHandlerPlayVoiceMail : NSObject <SVXServiceCommandHandling>

 {
    SVXSessionManager *_sessionManager;
    SVXModule *_module;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(CGFloat)_audioPlaybackDuration:(id)arg0 ;
-(id)initWithSessionManager:(id)arg0 module:(id)arg1 ;
-(void)_markVoiceMailAsRead:(id)arg0 forRemoteDevice:(id)arg1 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;


@end


#endif