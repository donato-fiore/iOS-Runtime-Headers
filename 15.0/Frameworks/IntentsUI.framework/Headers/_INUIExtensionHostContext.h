// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INUIEXTENSIONHOSTCONTEXT_H
#define _INUIEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _INUIExtensionContextHosting, INUIExtensionHostContextDelegate;



@interface _INUIExtensionHostContext : NSExtensionContext <_INUIExtensionContextHosting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<INUIExtensionHostContextDelegate> *extensionHostContextDelegate; // ivar: _extensionHostContextDelegate
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)_errorHandlingExtensionContextProxy;
-(void)requestHandlingOfIntent:(id)arg0 ;
-(void)setExtensionContextState:(id)arg0 completion:(id)arg1 ;
-(void)willBeginEditing;


@end


#endif