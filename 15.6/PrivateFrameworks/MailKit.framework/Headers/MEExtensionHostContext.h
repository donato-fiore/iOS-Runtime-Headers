// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEEXTENSIONHOSTCONTEXT_H
#define MEEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol MEExtensionRemoteHostProtocol, MEMailComposeExtensionHostDelegate;



@interface MEExtensionHostContext : NSExtensionContext <MEExtensionRemoteHostProtocol>



@property (weak, nonatomic) NSObject<MEMailComposeExtensionHostDelegate> *composeExtensionHostDelegate; // ivar: _composeExtensionHostDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)extensionHostRequestScheduler;
-(void)regenerateEmailAddressTokenChangesForSession:(id)arg0 ;


@end


#endif