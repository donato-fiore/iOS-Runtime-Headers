// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHMEDIAREQUEST_H
#define PHMEDIAREQUEST_H

@class NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PHAsset.h"

@interface PHMediaRequest : NSObject {
    uint8_t _cancelled;
    NSString *_identifierString;
    NSMutableArray *_progresses;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) PHAsset *asset; // ivar: _asset
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) NSInteger contextType; // ivar: _contextType
@property (readonly, nonatomic) NSInteger downloadIntent;
@property (readonly, nonatomic) NSInteger downloadPriority;
@property (readonly, nonatomic) NSUInteger managerID; // ivar: _managerID
@property (readonly, nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly, nonatomic) NSUInteger requestIndex; // ivar: _requestIndex
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous;
@property (nonatomic) BOOL wantsProgress; // ivar: _wantsProgress


-(id)identifierString;
-(id)initWithRequestID:(int)arg0 requestIndex:(NSUInteger)arg1 contextType:(NSInteger)arg2 managerID:(NSUInteger)arg3 asset:(id)arg4 ;
-(id)sendMakeAvailableRequestForResource:(id)arg0 reply:(id)arg1 ;
-(id)sendResourceRepairRequestForResource:(id)arg0 errorCodes:(id)arg1 reply:(id)arg2 ;
-(id)sendResourceRepairRequestWithErrorCodes:(id)arg0 reply:(id)arg1 ;
-(void)cancel;
-(void)handleAvailabilityChangeForResource:(id)arg0 url:(id)arg1 info:(id)arg2 error:(id)arg3 ;
-(void)recordMetricsWithMetricsHandler:(id)arg0 ;
-(void)startRequest;


@end


#endif