// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUEDITINGEXTENSIONHOSTCONTEXT_H
#define PUEDITINGEXTENSIONHOSTCONTEXT_H

@class NSExtensionContext;
@protocol PUEditingExtensionHost;



@interface PUEditingExtensionHostContext : NSExtensionContext <PUEditingExtensionHost>



@property (copy) id *contentEditingOutputCommitHandler; // ivar: _contentEditingOutputCommitHandler


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)commitContentEditingOutput:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif