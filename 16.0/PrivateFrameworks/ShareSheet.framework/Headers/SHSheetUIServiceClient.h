// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETUISERVICECLIENT_H
#define SHSHEETUISERVICECLIENT_H

@class BSServiceConnection, NSString;
@protocol SHSheetContentPresenter;

#import <Foundation/Foundation.h>

#import "SHSheetUIServiceClientContext.h"

@interface SHSheetUIServiceClient : NSObject

@property (readonly, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (retain, nonatomic) SHSheetUIServiceClientContext *currentContext; // ivar: _currentContext
@property (nonatomic) NSInteger pendingRequest; // ivar: _pendingRequest
@property (readonly, weak, nonatomic) NSObject<SHSheetContentPresenter> *presenter; // ivar: _presenter
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)isConnected;
-(id)initWithSessionIdentifier:(id)arg0 presenter:(id)arg1 ;
-(id)sessionServer;
-(void)_activateConnection;
-(void)_didActivateConnection;
-(void)_didInvalidateConnection;
-(void)_reconnect;
-(void)_setupNewConnection;
-(void)connect;
-(void)invalidate;
-(void)updateWithContext:(id)arg0 ;


@end


#endif