// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STKALERTSESSIONMANAGER_H
#define STKALERTSESSIONMANAGER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "STKAlertSessionEventQueue.h"

@interface STKAlertSessionManager : NSObject

@property (retain) NSString *deviceLanguage; // ivar: _deviceLanguage
@property (readonly, nonatomic) STKAlertSessionEventQueue *eventQueue; // ivar: _eventQueue
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


-(id)initWithEventQueue:(id)arg0 logger:(id)arg1 ;
-(id)remoteAlertDescriptorForSession:(id)arg0 ;
-(void)_willPresentAlertHandle:(id)arg0 ;
-(void)enqueuePresentationForSession:(id)arg0 completion:(id)arg1 ;


@end


#endif