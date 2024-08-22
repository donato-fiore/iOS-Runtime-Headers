// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRTEXTDETECTORMODEL_H
#define CRTEXTDETECTORMODEL_H

@class MLModel;

#import <Foundation/Foundation.h>


@interface CRTextDetectorModel : NSObject

@property (readonly, nonatomic) MLModel *model; // ivar: _model


+(id)defaultURLOfModelInThisBundle;
-(id)init;
-(id)initWithConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromData:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromInputs:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif