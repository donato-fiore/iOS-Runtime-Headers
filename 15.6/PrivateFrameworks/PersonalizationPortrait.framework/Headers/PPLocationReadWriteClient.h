// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPLOCATIONREADWRITECLIENT_H
#define PPLOCATIONREADWRITECLIENT_H


#import <Foundation/Foundation.h>

#import "PPXPCClientHelper.h"

@interface PPLocationReadWriteClient : NSObject {
    PPXPCClientHelper *_clientHelper;
}




+(id)sharedInstance;
-(BOOL)_doDeletionSyncCallWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 syncCall:(id)arg2 ;
-(BOOL)_doSyncCallWithError:(*id)arg0 syncCall:(id)arg1 ;
-(BOOL)clearWithError:(*id)arg0 deletedCount:(*NSUInteger)arg1 ;
-(BOOL)cloudSyncWithError:(*id)arg0 ;
-(BOOL)donateLocations:(id)arg0 source:(id)arg1 contextualNamedEntities:(id)arg2 algorithm:(unsigned short)arg3 cloudSync:(BOOL)arg4 decayRate:(CGFloat)arg5 error:(*id)arg6 ;
-(id)_synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)init;


@end


#endif