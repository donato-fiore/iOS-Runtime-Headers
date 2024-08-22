// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSXPCSTORECONNECTION_H
#define NSXPCSTORECONNECTION_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "NSXPCStore.h"

@interface NSXPCStoreConnection : NSObject {
    NSXPCStore *_store;
    NSXPCConnection *_connection;
}




-(id)initForStore:(id)arg0 ;
-(void)dealloc;


@end


#endif