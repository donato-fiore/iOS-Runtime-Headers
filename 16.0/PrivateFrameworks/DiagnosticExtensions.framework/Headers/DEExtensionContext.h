// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXTENSIONCONTEXT_H
#define DEEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol DEExtensionVendorProtocol;



@interface DEExtensionContext : NSExtensionContext <DEExtensionVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)hasEntitlement;
-(void)attachmentListWithHandler:(id)arg0 ;
-(void)attachmentsForParameters:(id)arg0 withHandler:(id)arg1 ;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(id)arg0 ;
-(void)setupWithParameters:(id)arg0 withHandler:(id)arg1 ;
-(void)teardownWithParameters:(id)arg0 withHandler:(id)arg1 ;


@end


#endif