// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMSM_IDSCLIENT_H
#define CMSM_IDSCLIENT_H

@class IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CMSM_IDSClient : NSObject <IDSServiceDelegate>

 {
    IDSService *pIdsService;
    NSObject<OS_dispatch_queue> *idsDispatchQueue;
    NSString *_lastSentRemotePlayingInfoQueryGUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(id)init;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;


@end


#endif