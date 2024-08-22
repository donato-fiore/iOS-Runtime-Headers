// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIREMOTEINPUTVIEWCONTROLLERINTERFACE_H
#define UIREMOTEINPUTVIEWCONTROLLERINTERFACE_H

@class NSExtensionContext, NSString;
@protocol _UIIVCResponseDelegate;



@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<_UIIVCResponseDelegate> *responseDelegate; // ivar: _responseDelegate
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)_handleInputViewControllerState:(id)arg0 ;
-(void)_openURL:(id)arg0 completion:(id)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg0 ;
-(void)_tearDownRemoteService;
-(void)dealloc;


@end


#endif