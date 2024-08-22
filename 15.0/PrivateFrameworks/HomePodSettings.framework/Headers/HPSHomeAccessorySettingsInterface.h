// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HPSHOMEACCESSORYSETTINGSINTERFACE_H
#define HPSHOMEACCESSORYSETTINGSINTERFACE_H

@class NSXPCConnection;
@protocol HPSHomeAccessorySettingsConnectionInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "HPSHomeAccessoryInterfaceMediator.h"

@interface HPSHomeAccessorySettingsInterface : NSObject

@property (weak, nonatomic) NSObject<HPSHomeAccessorySettingsConnectionInterfaceDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isValidConnection; // ivar: _isValidConnection
@property (retain, nonatomic) HPSHomeAccessoryInterfaceMediator *mediator; // ivar: _mediator
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithDelegate:(id)arg0 ;
-(void)accessoryDidUpdateValueForEndPointIdentifier:(id)arg0 keyPath:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(void)fetchAccessorySettingsValueForEndPointIdentifier:(id)arg0 keyPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
-(void)susbcribeToAccessorySettingsForEndPointIdentifier:(id)arg0 keypath:(id)arg1 completionHandler:(id)arg2 ;
-(void)unsubscribeToAccessorySettingsForEndPointIdentifier:(id)arg0 keypath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif