// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINPUTVIEWCONTROLLERINTERFACECLIENT_H
#define UIINPUTVIEWCONTROLLERINTERFACECLIENT_H

@class NSExtensionContext;
@protocol _UIIVCInterface;



@interface UIInputViewControllerInterfaceClient : NSExtensionContext

@property (retain, nonatomic) NSObject<_UIIVCInterface> *forwardingInterface; // ivar: _forwardingInterface


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)responseDelegate;
-(void)_handleInputViewControllerState:(id)arg0 ;
-(void)_tearDownRemoteService;
-(void)dealloc;


@end


#endif