// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSTORELYRICSMUSICKITREQUESTOPERATION_H
#define MPSTORELYRICSMUSICKITREQUESTOPERATION_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;


#import "MPAsyncOperation.h"

@interface MPStoreLyricsMusicKitRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) NSInteger songAdamID; // ivar: _songAdamID


+(BOOL)supportsLyricsForURLBag:(id)arg0 ;
+(id)_lyricsURLForURLBag:(id)arg0 identifier:(NSInteger)arg1 ;
-(id)init;
-(void)_enqueueOperationWithURL:(id)arg0 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif