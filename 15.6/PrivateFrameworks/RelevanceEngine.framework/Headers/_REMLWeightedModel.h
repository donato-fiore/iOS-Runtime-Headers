// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _REMLWEIGHTEDMODEL_H
#define _REMLWEIGHTEDMODEL_H

@protocol REAutomaticExportedInterface;

#import <Foundation/Foundation.h>

#import "REInteractionDescriptor.h"
#import "REFeature.h"

@interface _REMLWeightedModel : NSObject <REAutomaticExportedInterface>

 {
    REInteractionDescriptor *_descriptor;
    REFeature *_biasFeature;
}


@property (readonly, nonatomic) REFeature *selectionFeature;
@property (readonly, nonatomic) float weight;


+(id)weightedModelWithDescriptor:(id)arg0 featureSet:(id)arg1 ;
-(BOOL)_loadModel:(id)arg0 fromURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)loadModelFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveModelToURL:(id)arg0 error:(*id)arg1 ;
-(float)_biasForFeatureSet:(id)arg0 ;
-(id)initWithBiasFeature:(id)arg0 ;
-(id)predictWithFeatures:(id)arg0 ;
-(void)_configureMode:(id)arg0 ;
-(void)enumerateModels:(id)arg0 ;
-(void)trainModelWithFeatureMap:(id)arg0 positiveEvent:(id)arg1 ;


@end


#endif