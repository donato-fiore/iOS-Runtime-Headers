// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKINTERFACELISTENER_H
#define GKINTERFACELISTENER_H

@protocol InterfaceListenerDelegate;

#import <Foundation/Foundation.h>


@interface GKInterfaceListener : NSObject {
    *__SCDynamicStore _dynamicStore;
    _opaque_pthread_mutex_t _notificationMutex;
    id *_interfaceListenerDelegate;
    int _notifyToken;
    BOOL _monitoringAvailable;
}


@property BOOL _isCellUp; // ivar: _isCellUp
@property BOOL _isWifiUp; // ivar: _isWifiUp
@property NSObject<InterfaceListenerDelegate> *interfaceListenerDelegate;


-(BOOL)startChangeListener;
-(BOOL)startRoutingChangeListener;
-(BOOL)stopChangeListener;
-(id)init;
-(void)dealloc;
-(void)hasConnectionWithWifi:(*BOOL)arg0 cell:(*BOOL)arg1 ;
-(void)stopRoutingChangeListener;


@end


#endif