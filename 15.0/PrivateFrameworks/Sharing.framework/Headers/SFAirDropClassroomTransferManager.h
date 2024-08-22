// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAIRDROPCLASSROOMTRANSFERMANAGER_H
#define SFAIRDROPCLASSROOMTRANSFERMANAGER_H

@class NSString;
@protocol SFAirDropClassroomTransferManagerProtocol, SFAirDropClassroomTransferDelegate;


#import "SFXPCClient.h"

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAirDropClassroomTransferDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldEscapeXpcTryCatch;
-(id)exportedInterface;
-(id)machServiceName;
-(id)remoteObjectInterface;
-(void)_getRemoteObjectProxyOnQueue:(id)arg0 ;
-(void)activate;
-(void)invalidate;
-(void)transferWithIdentifierWasAccepted:(id)arg0 ;
-(void)transferWithIdentifierWasDeclined:(id)arg0 withFailureReason:(NSUInteger)arg1 ;
-(void)updateTransferWithIdentifier:(id)arg0 withState:(NSInteger)arg1 information:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif