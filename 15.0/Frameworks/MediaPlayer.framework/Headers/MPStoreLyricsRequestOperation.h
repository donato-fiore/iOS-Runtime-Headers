// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORELYRICSREQUESTOPERATION_H
#define MPSTORELYRICSREQUESTOPERATION_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;


#import "MPAsyncOperation.h"

@interface MPStoreLyricsRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (nonatomic) NSInteger songAdamID; // ivar: _songAdamID


+(BOOL)supportsLyricsForURLBagDictionary:(id)arg0 ;
+(id)_lyricsURLForURLBagDictionary:(id)arg0 ;
-(id)init;
-(void)_enqueueOperationWithURL:(id)arg0 bagDictionary:(id)arg1 allowingAuthentication:(BOOL)arg2 ;
-(void)cancel;
-(void)execute;
-(void)finishWithError:(id)arg0 ;


@end


#endif