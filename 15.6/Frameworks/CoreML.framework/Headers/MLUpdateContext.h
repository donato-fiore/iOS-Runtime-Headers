// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLUPDATECONTEXT_H
#define MLUPDATECONTEXT_H

@class NSError, NSDictionary, MLModel<MLWritable>;

#import <Foundation/Foundation.h>

#import "MLUpdateTask.h"

@interface MLUpdateContext : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) NSInteger event; // ivar: _event
@property (retain, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (retain, nonatomic) MLModel<MLWritable> *model; // ivar: _model
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (retain, nonatomic) MLUpdateTask *task; // ivar: _task


+(id)updateContextForEvent:(NSInteger)arg0 metrics:(id)arg1 parameters:(id)arg2 error:(id)arg3 ;
+(id)updateContextWithTask:(id)arg0 model:(id)arg1 event:(NSInteger)arg2 metrics:(id)arg3 parameters:(id)arg4 ;
-(id)description;


@end


#endif