// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBPROCESSINGMODELRESULT_H
#define HMBPROCESSINGMODELRESULT_H

@class HMFObject, NAFuture;


#import "HMBModel.h"
#import "HMBProcessingOptions.h"

@interface HMBProcessingModelResult : HMFObject

@property (readonly) NAFuture *mirrorOutputFuture; // ivar: _mirrorOutputFuture
@property (readonly) HMBModel *model; // ivar: _model
@property (readonly) HMBProcessingOptions *options; // ivar: _options


+(id)alloc;
-(id)attributeDescriptions;
-(id)initWithModel:(id)arg0 options:(id)arg1 mirrorOutputFuture:(id)arg2 ;


@end


#endif