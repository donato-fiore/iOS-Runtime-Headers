// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _WKREMOTEOBJECTINTERFACE_H
#define _WKREMOTEOBJECTINTERFACE_H

@class NSString, Protocol;

#import <Foundation/Foundation.h>


@interface _WKRemoteObjectInterface : NSObject {
    RetainPtr<NSString> _identifier;
    HashMap<SEL *, MethodInfo, WTF::DefaultHash<SEL *>, WTF::HashTraits<SEL *>, WTF::HashTraits<MethodInfo>, WTF::HashTableTraits> _methods;
}


@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) Protocol *protocol; // ivar: _protocol


+(id)remoteObjectInterfaceWithProtocol:(id)arg0 ;
-(*void)_allowedArgumentClassesForReplyBlockOfSelector:(SEL)arg0 ;
-(*void)_allowedArgumentClassesForSelector:(SEL)arg0 ;
-(id)_invocationForReplyBlockOfSelector:(SEL)arg0 ;
-(id)_invocationForSelector:(SEL)arg0 ;
-(id)classesForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ;
-(id)classesForSelector:(SEL)arg0 argumentIndex:(NSUInteger)arg1 ofReply:(BOOL)arg2 ;
-(id)debugDescription;
-(id)initWithProtocol:(id)arg0 identifier:(id)arg1 ;
-(void)setClasses:(id)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ;
-(void)setClasses:(id)arg0 forSelector:(SEL)arg1 argumentIndex:(NSUInteger)arg2 ofReply:(BOOL)arg3 ;


@end


#endif