// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHVIDEOREQUESTCONTEXT_H
#define PHVIDEOREQUESTCONTEXT_H

@class NSProgress;


#import "PHMediaRequestContext.h"
#import "PHVideoRequestOptions.h"

@interface PHVideoRequestContext : PHMediaRequestContext {
    NSProgress *_progress;
}


@property (readonly, nonatomic) NSInteger intent; // ivar: _intent
@property (readonly, nonatomic) PHVideoRequestOptions *videoOptions; // ivar: _videoOptions


-(BOOL)isNetworkAccessAllowed;
-(BOOL)representsShareableHighQualityResource;
-(BOOL)shouldReportProgress;
-(NSInteger)type;
-(id)_lazyProgress;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 displaySpec:(id)arg3 options:(id)arg4 intent:(NSInteger)arg5 resultHandler:(id)arg6 ;
-(id)initialRequests;
-(id)progressHandler:(SEL)arg0 ;
-(id)progresses;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif