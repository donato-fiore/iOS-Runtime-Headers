// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOPICKERABSTRACTEXTENSIONCONTEXT_H
#define PUPHOTOPICKERABSTRACTEXTENSIONCONTEXT_H

@class NSExtensionContext;



@interface PUPhotoPickerAbstractExtensionContext : NSExtensionContext



+(id)_allowedItemPayloadClasses;
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)principalObject;
-(id)proxy;
-(void)firstPayloadFromExtensionItems:(id)arg0 completion:(id)arg1 ;
-(void)invalidateContext;


@end


#endif