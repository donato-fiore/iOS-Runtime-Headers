// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILCLASSIFICATIONUIEXTENSIONHOSTCONTEXT_H
#define ILCLASSIFICATIONUIEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol ILClassificationUIExtensionHostProtocol, ILClassificationUIExtensionHostContextDelegate, OS_dispatch_queue;



@interface ILClassificationUIExtensionHostContext : NSExtensionContext <ILClassificationUIExtensionHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ILClassificationUIExtensionHostContextDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)classificationResponseForRequest:(id)arg0 completion:(id)arg1 ;
-(void)prepareForClassificationRequest:(id)arg0 ;
-(void)setReadyForClassificationResponse:(BOOL)arg0 ;


@end


#endif