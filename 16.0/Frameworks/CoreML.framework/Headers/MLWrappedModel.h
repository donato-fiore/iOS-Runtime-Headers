// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLWRAPPEDMODEL_H
#define MLWRAPPEDMODEL_H

@class NSString;


#import "MLModel.h"

@interface MLWrappedModel : MLModel

@property (retain) MLModel *innerModel; // ivar: _innerModel
@property (retain, nonatomic) NSString *reason; // ivar: _reason


-(id)initWithInnerModel:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)clearInnerModelWithReason:(id)arg0 ;


@end


#endif