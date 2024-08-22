// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCERRORS_H
#define _DKSYNCERRORS_H


#import <Foundation/Foundation.h>


@interface _DKSyncErrors : NSObject



+(id)couldNotSaveForSync;
+(id)disabled;
+(id)domain;
+(id)failedToApplyRemoteChanges;
+(id)failedToFetchChanges;
+(id)internalFailure;
+(id)invalidData;
+(id)invalidRequest;
+(id)invalidResponse;
+(id)missingHighWaterMark;
+(id)temporaryFailure;
+(id)unavailableForCurrentUser;


@end


#endif