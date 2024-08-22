// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOADDRESSCORRECTIONREQUESTER_H
#define GEOADDRESSCORRECTIONREQUESTER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface GEOAddressCorrectionRequester : NSObject {
    NSMapTable *_pendingRequests;
    os_unfair_lock_s _pendingRequestsLock;
}




+(id)sharedRequester;
-(id)init;
-(void)cancelRequest:(id)arg0 ;
-(void)dealloc;
// -(void)startAddressCorrectionInitRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;
// -(void)startAddressCorrectionUpdateRequest:(id)arg0 finished:(id)arg1 error:(unk)arg2  ;


@end


#endif