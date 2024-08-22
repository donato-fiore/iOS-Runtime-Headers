// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INEXTENSIONCONTEXTHOST_H
#define INEXTENSIONCONTEXTHOST_H

@class NSExtensionContext, NSString, NSBundle;
@protocol INExtensionContextHosting;



@interface INExtensionContextHost : NSExtensionContext <INExtensionContextHosting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *extensionBundle; // ivar: _extensionBundle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;


@end


#endif