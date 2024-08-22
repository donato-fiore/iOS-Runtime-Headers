// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCATALYSTCONTENTSERVICECONTEXT_H
#define WFCATALYSTCONTENTSERVICECONTEXT_H

@class NSExtensionContext, NSString;
@protocol WFCatalystContentService, WFCatalystContentHost;



@interface WFCatalystContentServiceContext : NSExtensionContext <WFCatalystContentService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<WFCatalystContentHost> *hostProxy;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;


@end


#endif