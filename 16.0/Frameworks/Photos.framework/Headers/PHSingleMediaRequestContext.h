// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHSINGLEMEDIAREQUESTCONTEXT_H
#define PHSINGLEMEDIAREQUESTCONTEXT_H

@class NSProgress;


#import "PHMediaRequestContext.h"
#import "PHMediaRequest.h"

@interface PHSingleMediaRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
    NSInteger _type;
    BOOL _networkAccessAllowed;
    id *_progressHandler;
}


@property (retain, nonatomic) PHMediaRequest *request; // ivar: _request


+(NSInteger)_indexOfAvProxyFromResources:(id)arg0 hasAdjustments:(BOOL)arg1 version:(NSInteger)arg2 ;
+(id)avProxyRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
+(id)originalAdjustmentDataRequestContextWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(BOOL)isNetworkAccessAllowed;
-(BOOL)isSynchronous;
-(NSInteger)type;
-(id)_lazyProgress;
// -(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 displaySpec:(id)arg3 type:(NSInteger)arg4 networkAccessAllowed:(BOOL)arg5 progressHandler:(id)arg6 resultHandler:(unk)arg7  ;
-(id)initialRequests;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif