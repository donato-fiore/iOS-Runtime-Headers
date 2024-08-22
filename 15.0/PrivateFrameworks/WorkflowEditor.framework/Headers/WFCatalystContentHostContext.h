// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCATALYSTCONTENTHOSTCONTEXT_H
#define WFCATALYSTCONTENTHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol WFCatalystContentHost;



@interface WFCatalystContentHostContext : NSExtensionContext <WFCatalystContentHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<WFCatalystContentHost> *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)actionInterfaceListenerDidBecomeActive:(id)arg0 ;


@end


#endif