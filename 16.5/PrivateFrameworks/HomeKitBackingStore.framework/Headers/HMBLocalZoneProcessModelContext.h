// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBLOCALZONEPROCESSMODELCONTEXT_H
#define HMBLOCALZONEPROCESSMODELCONTEXT_H

@class HMFObject, NSData, NSNumber;


#import "HMBModel.h"

@interface HMBLocalZoneProcessModelContext : HMFObject

@property (readonly, nonatomic) NSData *externalData; // ivar: _externalData
@property (readonly, nonatomic) HMBModel *model; // ivar: _model
@property (readonly, copy, nonatomic) NSNumber *outputBlockRow; // ivar: _outputBlockRow


-(id)initWithModel:(id)arg0 outputBlockRow:(id)arg1 externalData:(id)arg2 ;


@end


#endif