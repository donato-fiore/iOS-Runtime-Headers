// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSERVICECOMMANDHANDLERUISHOWREQUESTHANDLINGSTATUS_H
#define SVXSERVICECOMMANDHANDLERUISHOWREQUESTHANDLINGSTATUS_H

@class NSDictionary, SBSDebugInterface, NSString;
@protocol SVXSessionActivityListening, SVXServiceCommandHandling, SVXPerforming;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandHandlerUIShowRequestHandlingStatus : NSObject <SVXSessionActivityListening, SVXServiceCommandHandling>

 {
    BOOL _shouldShowStatus;
    NSDictionary *_statusLEDCommands;
    SBSDebugInterface *_debugInterface;
    id<SVXPerforming> *_performer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(id)initWithSessionManager:(id)arg0 performer:(id)arg1 ;
-(void)_clearLEDs;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg0 ;


@end


#endif