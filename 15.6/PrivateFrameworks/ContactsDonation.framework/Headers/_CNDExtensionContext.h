// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNDEXTENSIONCONTEXT_H
#define _CNDEXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _CNDExtensionContextProtocol;



@interface _CNDExtensionContext : NSExtensionContext <_CNDExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)makeHostProtocol;
+(id)makeVendorProtocol;


@end


#endif