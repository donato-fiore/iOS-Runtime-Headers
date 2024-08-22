// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSCLIENTSETTINGSSTORE_H
#define _LSCLIENTSETTINGSSTORE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;


#import "LSSettingsStore.h"
#import "LSSettingsStoreConfiguration.h"

@interface _LSClientSettingsStore : LSSettingsStore {
    NSXPCConnection *_xpcConnection;
}


@property (retain, nonatomic) LSSettingsStoreConfiguration *configuration; // ivar: _configuration
@property (retain) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue


+(BOOL)supportsSecureCoding;
-(BOOL)setUserElection:(unsigned char)arg0 forExtensionKey:(id)arg1 error:(*id)arg2 ;
-(id)__internalQueue_xpcConnectionWithError:(*id)arg0 ;
-(id)init;
-(unsigned char)userElectionForExtensionKey:(id)arg0 ;
-(void)dealloc;


@end


#endif