// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDBACKINGSTORELOCALFLUSHOPERATION_H
#define HMDBACKINGSTORELOCALFLUSHOPERATION_H

@class NSOperation;


#import "HMDBackingStoreLocal.h"

@interface HMDBackingStoreLocalFlushOperation : NSOperation

@property (nonatomic) BOOL clearCloud; // ivar: _clearCloud
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler
@property (retain, nonatomic) HMDBackingStoreLocal *store; // ivar: _store


-(id)initWithStore:(id)arg0 clearCloud:(BOOL)arg1 resultHandler:(id)arg2 ;
-(void)main;


@end


#endif