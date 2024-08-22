// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISSTORE_H
#define ISSTORE_H

@class NSXPCConnection, NSString, NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ISStore : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property (readonly) NSString *domain; // ivar: _domain
@property (readonly) NSMutableDictionary *registry; // ivar: _registry
@property os_unfair_lock_s registryLock; // ivar: _registryLock
@property (readonly) NSURL *storeURL; // ivar: _storeURL


-(BOOL)removeUnitForUUID:(id)arg0 ;
-(BOOL)writeStoreUnit:(id)arg0 ;
-(id)addUnitWithData:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)unitForUUID:(id)arg0 ;


@end


#endif