// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XAMOBSERVER_H
#define XAMOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface XAMObserver : NSObject {
    NSMutableDictionary *_handlers;
    BOOL _hasReceivedAutomationModeEnabledState;
    int _observationToken;
}


@property (readonly) BOOL automationModeRequiresAuthentication;
@property (readonly) NSString *changeNotificationName; // ivar: _changeNotificationName
@property (readonly) BOOL isAutomationModeEnabled; // ivar: _isAutomationModeEnabled
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) id *readerConnectionFactory; // ivar: _readerConnectionFactory


+(id)sharedInstance;
-(BOOL)currentAutomationModeEnabledStateFromDaemon;
-(id)initWithChangeNotificationName:(id)arg0 readerConnectionFactory:(id)arg1 ;
-(id)registerAutomationModeChangeHandlerOnQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)_listenForAutomationModeChangeNotifications;
-(void)_notifyHandlers;
-(void)dealloc;
-(void)unregisterAutomationModeChangeHandler:(id)arg0 ;


@end


#endif