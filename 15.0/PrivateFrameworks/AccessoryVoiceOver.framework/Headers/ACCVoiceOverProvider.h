// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACCVOICEOVERPROVIDER_H
#define ACCVOICEOVERPROVIDER_H

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol ACCVoiceOverProviderProtocol, ACCVoiceOverXPCServerProtocol;

#import <Foundation/Foundation.h>


@interface ACCVoiceOverProvider : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories; // ivar: _accessories
@property (weak, nonatomic) NSObject<ACCVoiceOverProviderProtocol> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSString *providerUID; // ivar: _providerUID
@property (retain, nonatomic) NSObject<ACCVoiceOverXPCServerProtocol> *remoteObject; // ivar: _remoteObject
@property (retain, nonatomic) NSXPCConnection *serverConnection; // ivar: _serverConnection


-(BOOL)calculateDesiredState:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)accessoryVoiceOver:(id)arg0 performAction:(int)arg1 parameters:(id)arg2 ;
-(void)accessoryVoiceOver:(id)arg0 requestConfiguration:(int)arg1 param:(id)arg2 ;
-(void)accessoryVoiceOver:(id)arg0 setContext:(int)arg1 ;
-(void)accessoryVoiceOver:(id)arg0 setEnabled:(BOOL)arg1 ;
-(void)accessoryVoiceOverAttached:(id)arg0 ;
-(void)accessoryVoiceOverDetached:(id)arg0 ;
-(void)accessoryVoiceOverStartCursorInformationUpdate:(id)arg0 ;
-(void)accessoryVoiceOverStartInformationUpdate:(id)arg0 ;
-(void)accessoryVoiceOverStopCursorInformationUpdate:(id)arg0 ;
-(void)accessoryVoiceOverStopInformationUpdate:(id)arg0 ;
-(void)connectToServer;
-(void)dealloc;
-(void)updateVoiceOverCursorInfo:(id)arg0 ;
-(void)updateVoiceOverInfo:(id)arg0 ;


@end


#endif