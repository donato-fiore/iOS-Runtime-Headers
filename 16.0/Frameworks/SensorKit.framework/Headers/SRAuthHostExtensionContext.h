// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRAUTHHOSTEXTENSIONCONTEXT_H
#define SRAUTHHOSTEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol SRAuthHostProtocol;



@interface SRAuthHostExtensionContext : NSExtensionContext <SRAuthHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteProxy;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif