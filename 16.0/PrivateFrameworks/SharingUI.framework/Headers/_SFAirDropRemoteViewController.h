// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFAIRDROPREMOTEVIEWCONTROLLER_H
#define _SFAIRDROPREMOTEVIEWCONTROLLER_H

@class UIRemoteViewController, NSString;
@protocol SFAirDropViewServiceHostProtocol;



@interface _SFAirDropRemoteViewController : UIRemoteViewController <SFAirDropViewServiceHostProtocol>



@property (weak, nonatomic) NSObject<SFAirDropViewServiceHostProtocol> *airDropHost; // ivar: _airDropHost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id)airDropExtensionService;
-(void)airDropViewServiceDidFinishTransferWithSuccess:(BOOL)arg0 ;
-(void)airDropViewServiceDidRequestDismissal;
-(void)airDropViewServiceDidStartTransfer;
-(void)airDropViewServiceRequestingSharedItemsWithDataRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)airDropViewServiceWillStartTransferToRecipient:(id)arg0 ;


@end


#endif