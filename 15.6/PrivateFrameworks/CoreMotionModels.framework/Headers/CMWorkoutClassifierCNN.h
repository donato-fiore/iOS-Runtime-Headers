// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWORKOUTCLASSIFIERCNN_H
#define CMWORKOUTCLASSIFIERCNN_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface CMWorkoutClassifierCNN : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


-(id)init;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromX__0:(id)arg0 error:(*id)arg1 ;


@end


#endif