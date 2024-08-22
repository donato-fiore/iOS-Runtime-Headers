// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CUTPROMISE_H
#define _CUTPROMISE_H

@protocol OS_dispatch_group, OS_dispatch_queue;


#import "CUTPromise.h"
#import "CUTResult.h"

@interface _CUTPromise : CUTPromise

@property (nonatomic) BOOL done; // ivar: _done
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) CUTResult *result; // ivar: _result


-(id)initWithQueue:(id)arg0 ;
-(void)_fulfillWithResult:(id)arg0 ;
-(void)registerResultBlock:(id)arg0 ;


@end


#endif