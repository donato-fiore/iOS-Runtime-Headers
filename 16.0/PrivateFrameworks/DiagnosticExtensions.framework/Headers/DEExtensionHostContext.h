// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DEEXTENSIONHOSTCONTEXT_H
#define DEEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol DEExtensionHostProtocol;



@interface DEExtensionHostContext : NSExtensionContext <DEExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *progressHandler; // ivar: _progressHandler
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(BOOL)hasEntitlement;
-(void)attachmentListWithHandler:(id)arg0 ;
// -(void)attachmentsForParameters:(id)arg0 withProgressHandler:(id)arg1 withHandler:(unk)arg2  ;
-(void)collectionDidUpdateWithProgress:(id)arg0 ;
-(void)isExtensionEnhancedLoggingStateOnWithHandler:(id)arg0 ;
-(void)setupForParameters:(id)arg0 withHandler:(id)arg1 ;
-(void)teardownForParameters:(id)arg0 withHandler:(id)arg1 ;


@end


#endif