// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(void)openDatasetStream:(NSUInteger)arg0 itemType:(NSInteger)arg1 originAppId:(id)arg2 deviceId:(id)arg3 userId:(id)arg4 options:(unsigned short)arg5 completion:(id)arg6 ;
-(void)removeItemId:(id)arg0 completion:(id)arg1 ;


@end


#endif