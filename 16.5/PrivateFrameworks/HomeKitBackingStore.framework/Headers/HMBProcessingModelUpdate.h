// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBPROCESSINGMODELUPDATE_H
#define HMBPROCESSINGMODELUPDATE_H



#import "HMBProcessingModelResult.h"
#import "HMBModel.h"

@interface HMBProcessingModelUpdate : HMBProcessingModelResult

@property (readonly) HMBModel *previousModel; // ivar: _previousModel


-(id)attributeDescriptions;
-(id)initWithModel:(id)arg0 previousModel:(id)arg1 options:(id)arg2 mirrorOutputFuture:(id)arg3 ;


@end


#endif