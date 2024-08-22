// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFHARDWAREMANAGERXPC_H
#define NFHARDWAREMANAGERXPC_H

@class NSXPCConnection, NSHashTable;

#import <Foundation/Foundation.h>


@interface NFHardwareManagerXPC : NSObject {
    NSXPCConnection *_xpcConnection;
    NSHashTable *_delegates;
    NSInteger _clientCount;
}


@property (readonly) NSXPCConnection *connection;


+(id)sharedXPC;
-(id)init;
-(void)addDelegate:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif