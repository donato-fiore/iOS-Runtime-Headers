// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPEXTENSIONCONTEXT_H
#define RPEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol RPExtensionVendorProtocol, RPExtensionContextDelegate;



@interface RPExtensionContext : NSExtensionContext <RPExtensionVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RPExtensionContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)setEndpoint:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif