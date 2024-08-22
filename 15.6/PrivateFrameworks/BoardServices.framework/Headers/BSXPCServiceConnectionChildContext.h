// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BSXPCSERVICECONNECTIONCHILDCONTEXT_H
#define BSXPCSERVICECONNECTIONCHILDCONTEXT_H



#import "BSXPCServiceConnectionContext.h"
#import "BSXPCServiceConnectionRootContext.h"

@interface BSXPCServiceConnectionChildContext : BSXPCServiceConnectionContext {
    BSXPCServiceConnectionRootContext *_parent;
    BOOL _remote;
    NSUInteger _identifier;
}




-(BOOL)isChild;
-(BOOL)isClient;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isServer;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)endpointDescription;


@end


#endif