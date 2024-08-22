// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BACKLIGHTDEXPORTEDOBJ_H
#define BACKLIGHTDEXPORTEDOBJ_H

@class NSXPCConnection, NSString;
@protocol BacklightdXPCProtocol;

#import <Foundation/Foundation.h>

#import "BrightnessSystemInternal.h"

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol>

 {
    NSUInteger _clientID;
    BOOL _clientIDSet;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BrightnessSystemInternal *server; // ivar: _server
@property (readonly) Class superclass;


-(id)copyClientID;
-(void)clientCopyPropertyWithKey:(id)arg0 reply:(id)arg1 ;
-(void)clientSetPropertyWithKey:(id)arg0 property:(id)arg1 ;
-(void)clientSetSYNCPropertyWithKey:(id)arg0 property:(id)arg1 reply:(id)arg2 ;
-(void)dealloc;
-(void)reconnect;
-(void)registerNotificationForProperties:(id)arg0 ;


@end


#endif