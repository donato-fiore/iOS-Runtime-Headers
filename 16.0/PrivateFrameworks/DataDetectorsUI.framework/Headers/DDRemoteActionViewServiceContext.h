// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDREMOTEACTIONVIEWSERVICECONTEXT_H
#define DDREMOTEACTIONVIEWSERVICECONTEXT_H

@class NSExtensionContext, NSString;
@protocol DDRemoteActionViewServiceProtocol;



@interface DDRemoteActionViewServiceContext : NSExtensionContext <DDRemoteActionViewServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)enableUserInteraction:(BOOL)arg0 ;
-(void)prepareViewControllerWithCompletionHandler:(id)arg0 ;


@end


#endif