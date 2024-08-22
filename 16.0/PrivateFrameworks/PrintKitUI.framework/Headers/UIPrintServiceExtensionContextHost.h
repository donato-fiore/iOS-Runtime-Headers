// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPRINTSERVICEEXTENSIONCONTEXTHOST_H
#define UIPRINTSERVICEEXTENSIONCONTEXTHOST_H

@class NSExtensionContext, NSString;
@protocol _UIPrintServiceHostProtocol;



@interface UIPrintServiceExtensionContextHost : NSExtensionContext <_UIPrintServiceHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)init;


@end


#endif