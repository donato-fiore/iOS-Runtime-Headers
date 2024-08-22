// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTREGCONNECTIONHANDLER_H
#define FTREGCONNECTIONHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FTRegConnectionHandler : NSObject {
    ? _handlerFlags;
}


@property (copy, nonatomic, setter=_setListenerID:) NSString *_listenerID; // ivar: _listenerID
@property (retain, nonatomic) NSString *_logName; // ivar: _logName
@property (readonly, retain, nonatomic) NSString *_serviceName;
@property (nonatomic) unsigned int caps; // ivar: _caps
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger serviceType; // ivar: _serviceType


-(BOOL)_isServiceSupported;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemon:(BOOL)arg0 ;
-(BOOL)isConnectedToDaemon;
-(id)initWithServiceType:(NSInteger)arg0 name:(id)arg1 ;
-(id)initWithServiceType:(NSInteger)arg0 name:(id)arg1 capabilities:(unsigned int)arg2 ;
-(void)_disconnectFromDaemon;
-(void)_handleDaemonConnected:(id)arg0 ;
-(void)_handleDaemonDisconnected:(id)arg0 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(void)dealloc;


@end


#endif