// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHADJUSTMENTDATAREQUESTCONTEXT_H
#define PHADJUSTMENTDATAREQUESTCONTEXT_H



#import "PHMediaRequestContext.h"
#import "PHImageRequestOptions.h"

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext

@property (readonly, nonatomic) PHImageRequestOptions *options; // ivar: _options


-(BOOL)isNetworkAccessAllowed;
-(NSInteger)type;
-(id)initWithRequestID:(int)arg0 managerID:(NSUInteger)arg1 asset:(id)arg2 options:(id)arg3 resultHandler:(id)arg4 ;
-(id)initialRequests;
-(void)processMediaResult:(id)arg0 forRequest:(id)arg1 ;


@end


#endif