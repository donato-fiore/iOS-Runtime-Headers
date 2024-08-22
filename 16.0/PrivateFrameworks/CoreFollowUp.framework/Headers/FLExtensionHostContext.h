// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLEXTENSIONHOSTCONTEXT_H
#define FLEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol FLExtensionHostContextInterface;



@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FLExtensionHostContextInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteContextWithErrorHandler:(id)arg0 ;
-(void)extensionDidFinish;
-(void)extensionDidFinishWithUserInfo:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif