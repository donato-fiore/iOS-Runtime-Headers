// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKDATACOLLECTORPENDINGBATCH_H
#define _HKDATACOLLECTORPENDINGBATCH_H

@class NSUUID, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "HKDevice.h"

@interface _HKDataCollectorPendingBatch : NSObject

@property (readonly, copy, nonatomic) NSUUID *batchUUID; // ivar: _batchUUID
@property (readonly, copy, nonatomic) NSArray *completions; // ivar: _completions
@property (readonly, copy, nonatomic) NSArray *data; // ivar: _data
@property (readonly, copy, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata


-(id)batchByAddingData:(id)arg0 completion:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithIdentifier:(id)arg0 data:(id)arg1 metadata:(id)arg2 device:(id)arg3 completion:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 data:(id)arg1 metadata:(id)arg2 device:(id)arg3 completions:(id)arg4 ;
-(void)callCompletionsWithSuccess:(BOOL)arg0 error:(id)arg1 ;


@end


#endif