// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UNSUSERNOTIFICATIONSERVERSETTINGSCONNECTIONLISTENER_H
#define UNSUSERNOTIFICATIONSERVERSETTINGSCONNECTIONLISTENER_H

@class NSMutableArray, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver;

#import <Foundation/Foundation.h>

#import "UNSNotificationSettingsService.h"

@interface UNSUserNotificationServerSettingsConnectionListener : NSObject <NSXPCListenerDelegate, UNUserNotificationSettingsServerProtocol, UNSNotificationSettingsServiceObserver>

 {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNSNotificationSettingsService *_settingsService;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_currentConnection;
-(id)initWithNotificationSettingsService:(id)arg0 ;
-(void)_handleClientConnectionInterrupted:(id)arg0 ;
-(void)_handleClientConnectionInvalidated:(id)arg0 ;
-(void)authorizationWithOptions:(NSUInteger)arg0 forNotificationSourceIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)dealloc;
-(void)getAllNotificationSourcesWithCompletionHandler:(id)arg0 ;
-(void)getNotificationSource:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSources:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getNotificationSystemSettingsWithCompletionHandler:(id)arg0 ;
-(void)replaceNotificationSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 ;
-(void)replaceNotificationTopicSettings:(id)arg0 forNotificationSourceIdentifier:(id)arg1 topicIdentifier:(id)arg2 ;
-(void)resetScheduledDeliverySetting;
-(void)resume;
-(void)setNotificationSystemSettings:(id)arg0 ;
-(void)settingsService:(id)arg0 didUpdateNotificationSourcesForBundleIdentifiers:(id)arg1 ;
-(void)settingsService:(id)arg0 didUpdateNotificationSystemSettings:(id)arg1 ;


@end


#endif