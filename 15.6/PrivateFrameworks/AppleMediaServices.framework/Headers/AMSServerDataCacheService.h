// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSSERVERDATACACHESERVICE_H
#define AMSSERVERDATACACHESERVICE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSServerDataCacheService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)_serverDataCacheFeatureEnabled;
-(id)_makeRemoteConnectionInterface;
-(id)_newRemoteConnection;
-(id)dataForAccountDSID:(id)arg0 cacheTypeID:(id)arg1 networkPolicy:(NSInteger)arg2 ;
-(id)granularNotificationSettingsForAccountDSID:(id)arg0 bundleID:(id)arg1 networkPolicy:(NSInteger)arg2 ;
-(id)init;
-(id)proxyWithErrorHandler:(id)arg0 ;
-(id)setUpCacheForAccount:(id)arg0 ;
-(id)setUpCacheForAccountDSID:(id)arg0 ;
-(id)tearDownCacheForAccountDSID:(id)arg0 ;
-(id)updateCacheForAccountDSID:(id)arg0 withCachePayload:(id)arg1 ;
-(id)updateCacheForAccountDSID:(id)arg0 withCacheTypeIDs:(id)arg1 ;
-(void)_removeRemoteConnection;
-(void)dealloc;


@end


#endif