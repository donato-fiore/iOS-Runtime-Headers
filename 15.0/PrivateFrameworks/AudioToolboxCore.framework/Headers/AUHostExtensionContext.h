// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AUHOSTEXTENSIONCONTEXT_H
#define AUHOSTEXTENSIONCONTEXT_H

@class NSExtensionContext, NSExtension, NSXPCConnection;


#import "AUHostDelegate.h"

@interface AUHostExtensionContext : NSExtensionContext

@property (retain, nonatomic) AUHostDelegate *delegate; // ivar: _delegate
@property (retain, nonatomic) NSExtension *extension; // ivar: _extension
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection;


+(id)_allowedItemPayloadClasses;
-(id)_derivedExtensionAuxiliaryHostProtocol;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithInputItems:(id)arg0 listenerEndpoint:(id)arg1 contextUUID:(id)arg2 ;
-(void)dealloc;


@end


#endif