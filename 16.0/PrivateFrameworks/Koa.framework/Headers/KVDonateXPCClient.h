// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KVDONATEXPCCLIENT_H
#define KVDONATEXPCCLIENT_H

@protocol KVDonateService;

#import <Foundation/Foundation.h>

#import "KVXPCClient.h"

@interface KVDonateXPCClient : NSObject <KVDonateService>

 {
    KVXPCClient *_client;
}




-(id)initWithClientId:(id)arg0 ;
-(void)abortDatasetStream;
-(void)addItems:(id)arg0 completion:(id)arg1 ;
-(void)closeDatasetStream:(id)arg0 ;
-(void)openDatasetStream:(NSUInteger)arg0 validity:(id)arg1 itemType:(NSInteger)arg2 originAppId:(id)arg3 deviceId:(id)arg4 userId:(id)arg5 options:(unsigned short)arg6 completion:(id)arg7 ;
-(void)removeItemId:(id)arg0 completion:(id)arg1 ;
-(void)terminate;


@end


#endif