// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNMLCUSTOMMODEL_H
#define SNMLCUSTOMMODEL_H

@class NSString, MLModelDescription;
@protocol SNMLModel, MLCustomModel;

#import <Foundation/Foundation.h>


@interface SNMLCustomModel : NSObject <SNMLModel>

 {
    id<MLCustomModel> *_customModel;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MLModelDescription *modelDescription; // ivar: _modelDescription
@property (readonly) Class superclass;


-(id)initWithMLCustomModel:(id)arg0 modelDescription:(id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif