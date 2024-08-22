// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASOHOSTCONTEXT_H
#define ASOHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol ASOHostProtocol;



@interface ASOHostContext : NSExtensionContext <ASOHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)serviceContext;
-(void)dismissOverlayWithReply:(id)arg0 ;
-(void)presentOverlayWithConfiguration:(id)arg0 delegate:(id)arg1 reply:(id)arg2 ;


@end


#endif