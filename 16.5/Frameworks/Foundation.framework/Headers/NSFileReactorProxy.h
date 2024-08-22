// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSFILEREACTORPROXY_H
#define NSFILEREACTORPROXY_H


#import <Foundation/Foundation.h>

#import "NSXPCConnection.h"
#import "NSFileAccessNode.h"

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id *_reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}


@property unsigned int effectiveUserIdentifier;


+(void)_enumerateParentDirectoriesStartingAtURL:(id)arg0 usingBlock:(id)arg1 ;
-(BOOL)allowedForURL:(id)arg0 ;
-(id)_clientProxy;
-(id)client;
-(id)description;
-(id)descriptionWithIndenting:(id)arg0 ;
-(id)initWithClient:(id)arg0 reactorID:(id)arg1 ;
-(id)itemLocation;
-(id)reactorID;
-(void)collectDebuggingInformationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)forwardUsingProxy:(id)arg0 ;
-(void)invalidate;
-(void)setItemLocation:(id)arg0 ;


@end


#endif