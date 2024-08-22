// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPLEGACYPROBLEMREQUESTER_H
#define GEORPLEGACYPROBLEMREQUESTER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface GEORPLegacyProblemRequester : NSObject {
    NSMapTable *_pendingRequests;
    os_unfair_lock_s _pendingRequestsLock;
}




+(id)sharedRequester;
-(id)init;
-(void)cancelRequest:(id)arg0 ;
-(void)dealloc;
// -(void)startStatusRequest:(id)arg0 finished:(id)arg1 networkActivity:(unk)arg2 error:(id)arg3  ;
// -(void)startSubmissionRequest:(id)arg0 finished:(id)arg1 networkActivity:(unk)arg2 error:(id)arg3  ;


@end


#endif