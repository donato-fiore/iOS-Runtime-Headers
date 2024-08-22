// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLMULTILABELLOGISTICREGRESSIONMODEL_H
#define PMLMULTILABELLOGISTICREGRESSIONMODEL_H

@class NSArray, NSString;
@protocol PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol;

#import <Foundation/Foundation.h>


@interface PMLMultiLabelLogisticRegressionModel : NSObject <PMLMultiLabelClassifierModelProtocol, PMLPlistAndChunksSerializableProtocol>

 {
    NSArray *_models;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)outputDimension;
-(id)initWithModels:(id)arg0 ;
-(id)initWithPlist:(id)arg0 chunks:(id)arg1 context:(id)arg2 ;
-(id)initWithWeightsArray:(id)arg0 andIntercept:(BOOL)arg1 ;
-(id)predict:(id)arg0 ;
-(id)serialize;
-(id)toPlistWithChunks:(id)arg0 ;


@end


#endif