// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MGSERVICECLIENTSET_H
#define MGSERVICECLIENTSET_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface MGServiceClientSet : NSObject {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSMapTable *clients; // ivar: _clients


-(id)init;
-(id)serviceClientForXPCConnection:(id)arg0 ;
-(void)addClientService:(id)arg0 ;
-(void)enumerateClientsUsingBlock:(id)arg0 ;
-(void)removeClientService:(id)arg0 ;


@end


#endif