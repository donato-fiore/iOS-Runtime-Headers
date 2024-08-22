// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXELEMENTVISION__GENERATED___H
#define AXELEMENTVISION__GENERATED___H

@class MLModel;

#import <Foundation/Foundation.h>


@interface AXElementVision__generated__ : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)urlOfModelInThisBundle;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromImage:(struct __CVBuffer *)arg0 iouThreshold:(CGFloat)arg1 confidenceThreshold:(CGFloat)arg2 error:(*id)arg3 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif