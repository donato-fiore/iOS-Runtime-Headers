// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUSCRIPTNOTIFICATIONOBSERVER_H
#define SUSCRIPTNOTIFICATIONOBSERVER_H

@class NSLock;

#import <Foundation/Foundation.h>


@interface SUScriptNotificationObserver : NSObject {
    NSLock *_lock;
    *__CFSet _receivers;
}




-(id)_copySafariQueryDictionaryFromURL:(id)arg0 ;
-(id)init;
-(void)_accessibilityPerformEscape;
-(void)_accessibilityPerformScrollDown;
-(void)_accessibilityPerformScrollLeft;
-(void)_accessibilityPerformScrollRight;
-(void)_accessibilityPerformScrollUp;
-(void)_audioSessionsChangedNotification:(id)arg0 ;
-(void)_beginObservingNotifications;
-(void)_dispatchEvent:(id)arg0 forName:(id)arg1 ;
-(void)_dispatchEventWithDictionary:(id)arg0 forName:(id)arg1 ;
-(void)_dispatchSafariEventWithDictionary:(id)arg0 andIdentifier:(id)arg1 ;
-(void)_endObservingNotifications;
-(void)_enumerateReceiversUsingBlock:(id)arg0 ;
-(void)_memoryWarningNotification:(id)arg0 ;
-(void)_networkTypeChangedNotification:(id)arg0 ;
-(void)_purchaseRequestDidSucceedNotification:(id)arg0 ;
-(void)_restrictionsChangedNotification:(id)arg0 ;
-(void)_safariViewControllerDataUpdate:(id)arg0 ;
-(void)_softwareMapChangedNotification:(id)arg0 ;
-(void)_storeBagDidChangeNotification:(id)arg0 ;
-(void)_subscriptionStatusDidChangeNotification:(id)arg0 ;
-(void)addEventReceiver:(id)arg0 ;
-(void)dealloc;
-(void)removeEventReceiver:(id)arg0 ;


@end


#endif