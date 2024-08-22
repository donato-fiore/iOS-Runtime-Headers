// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLCUSTOMMODELWRAPPER_H
#define MLCUSTOMMODELWRAPPER_H

@protocol MLCustomModel;


#import "MLModel.h"

@interface MLCustomModelWrapper : MLModel

@property (retain) NSObject<MLCustomModel> *customModel; // ivar: _customModel


-(id)initWithModelDescription:(id)arg0 customModel:(id)arg1 configuration:(id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif