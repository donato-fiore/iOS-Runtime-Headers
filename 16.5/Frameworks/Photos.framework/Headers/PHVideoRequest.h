// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHVIDEOREQUEST_H
#define PHVIDEOREQUEST_H

@class PLProgressFollower;
@protocol PHMediaRequestDelegate;


#import "PHMediaRequest.h"
#import "PHVideoResult.h"
#import "PHVideoRequestBehaviorSpec.h"
#import "PHImageDisplaySpec.h"

@interface PHVideoRequest : PHMediaRequest {
    PHVideoResult *_videoResult;
    PLProgressFollower *_progressFollower;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) PHVideoRequestBehaviorSpec *behaviorSpec; // ivar: _behaviorSpec
@property (readonly, weak, nonatomic) NSObject<PHMediaRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec; // ivar: _displaySpec


-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(NSInteger)downloadIntent;
-(NSInteger)downloadPriority;
-(id)initWithRequestID:(int)arg0 requestIndex:(NSUInteger)arg1 contextType:(NSInteger)arg2 managerID:(NSUInteger)arg3 asset:(id)arg4 displaySpec:(id)arg5 behaviorSpec:(id)arg6 delegate:(id)arg7 ;
-(void)_finish;
-(void)_handleResultVideoURL:(id)arg0 mediaItemMakerData:(id)arg1 fingerPrint:(id)arg2 info:(id)arg3 error:(id)arg4 ;
-(void)cancel;
-(void)dealloc;
-(void)startRequest;


@end


#endif