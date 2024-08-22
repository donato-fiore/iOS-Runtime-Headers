// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MXEXTENSIONCONTEXT_H
#define _MXEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _MXExtensionContextType;



@interface _MXExtensionContext : NSExtensionContext <_MXExtensionContextType>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;


@end


#endif