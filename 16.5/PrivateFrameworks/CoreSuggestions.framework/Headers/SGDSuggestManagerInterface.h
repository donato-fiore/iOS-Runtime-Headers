// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGDSUGGESTMANAGERINTERFACE_H
#define SGDSUGGESTMANAGERINTERFACE_H


#import <Foundation/Foundation.h>


@interface SGDSuggestManagerInterface : NSObject



+(id)xpcInterface;
+(id)xpcInterfaceForProtocol:(id)arg0 ;
+(void)_addSGXPCResponseToReplyWhitelistForMethods:(struct objc_method_description *)arg0 count:(unsigned int)arg1 interface:(id)arg2 ;
+(void)_addSGXPCResponseToReplyWhitelistForProtocol:(id)arg0 interface:(id)arg1 ;
+(void)_initialize;
// +(void)_registerWhitelistBlock:(id)arg0 forProtocol:(unk)arg1  ;
+(void)_whitelistXPCInterface:(id)arg0 forProtocol:(id)arg1 alreadyWhitelisted:(id)arg2 ;
+(void)interface:(id)arg0 returns:(Class)arg1 forSelector:(SEL)arg2 ;
+(void)interface:(id)arg0 returnsArrayOf:(Class)arg1 forSelector:(SEL)arg2 ;


@end


#endif