// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSXPCINTERFACE_H
#define NSXPCINTERFACE_H

@class Protocol;

#import <Foundation/Foundation.h>


@interface NSXPCInterface : NSObject {
    Protocol *_protocol;
    *void _reserved2;
    id *_reserved1;
}


@property Protocol *protocol;


+(id)interfaceWithProtocol:(id)arg0 ;
+(id)signatureForBlock:(id)arg0 ;
-(BOOL)_hasProxiesInArgumentsOfSelector:(SEL)arg0 ;
-(BOOL)_hasProxiesInReplyBlockArgumentsOfSelector:(SEL)arg0 ;
-(BOOL)_selectorIsAllowed:(SEL)arg0 isReply:(BOOL)arg1 methodSignature:(*id)arg2 allowedClasses:(*id)arg3 ;
-(BOOL)_specialCaseObject;
-(Class)_customSubclass;
-(Class)_returnClassForSelector:(SEL)arg0 ;
-(Class)classForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ofReply:(BOOL)arg2 ;
-(NSUInteger)_remoteVersion;
-(NSUInteger)_respondsToRemoteSelector:(SEL)arg0 ;
-(NSUInteger)version;
-(NSUInteger)versionForSelector:(SEL)arg0 ;
-(id)_generateAndCacheMethodSignatureForRemoteSelector:(SEL)arg0 ;
-(id)_interfaceForArgument:(NSUInteger)arg0 ofSelector:(SEL)arg1 reply:(BOOL)arg2 ;
-(id)_methodSignatureForRemoteSelector:(SEL)arg0 ;
-(id)_methodSignatureForReplyBlockOfSelector:(SEL)arg0 ;
-(id)classesForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ofReply:(BOOL)arg2 ;
-(id)debugDescription;
-(id)init;
-(id)interfaceForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ofReply:(BOOL)arg2 ;
-(id)replyBlockSignatureForSelector:(SEL)arg0 ;
-(struct _xpc_type_s *)XPCTypeForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ofReply:(BOOL)arg2 ;
-(void)dealloc;
-(void)setClass:(Class)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ofReply:(BOOL)arg3 ;
-(void)setClasses:(id)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ofReply:(BOOL)arg3 ;
-(void)setInterface:(id)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ofReply:(BOOL)arg3 ;
-(void)setReplyBlockSignature:(id)arg0 forSelector:(SEL)arg1 ;
-(void)setVersion:(NSUInteger)arg0 forSelector:(SEL)arg1 ;
-(void)setXPCType:(struct _xpc_type_s *)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ofReply:(BOOL)arg3 ;
-(void)set_remoteVersion:(NSUInteger)arg0 ;


@end


#endif