// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSINGLETONMLMODEL_H
#define CHSINGLETONMLMODEL_H

@class MLModel, MLModelConfiguration, MLModelDescription, NSString;

#import <Foundation/Foundation.h>


@interface CHSingletonMLModel : NSObject {
    NSInteger _modelUseCount;
    MLModel *_model;
}


@property (readonly, nonatomic) MLModelConfiguration *configuration;
@property (readonly, nonatomic) MLModelDescription *modelDescription;
@property (readonly, nonatomic) NSString *modelKey; // ivar: _modelKey


+(id)modelWithContentsOfURL:(id)arg0 configuration:(id)arg1 error:(*id)arg2 ;
+(void)releaseModelWithKey:(id)arg0 ;
+(void)setup;
-(NSInteger)usageCount;
-(id)initWithMLModel:(id)arg0 modelKey:(id)arg1 ;
-(id)model;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)decrementUsageCount;
-(void)incrementUsageCount;


@end


#endif