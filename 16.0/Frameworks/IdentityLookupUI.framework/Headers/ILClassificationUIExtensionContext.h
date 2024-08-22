// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ILCLASSIFICATIONUIEXTENSIONCONTEXT_H
#define ILCLASSIFICATIONUIEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol ILClassificationUIExtensionVendorProtocol;



@interface ILClassificationUIExtensionContext : NSExtensionContext <ILClassificationUIExtensionVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isReadyForClassificationResponse) BOOL readyForClassificationResponse; // ivar: _readyForClassificationResponse
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)viewController;
-(void)classificationResponseForRequest:(id)arg0 completion:(id)arg1 ;
-(void)prepareForClassificationRequest:(id)arg0 ;


@end


#endif