// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMDBASERECOMODEL_H
#define AMDBASERECOMODEL_H

@class NSString, MLModel;
@protocol AMDRecoModel;

#import <Foundation/Foundation.h>

#import "AMDModelAssets.h"
#import "AMDModelMetadata.h"

@interface AMDBaseRecoModel : NSObject <AMDRecoModel>



@property NSInteger assetCreationTimestamp; // ivar: _assetCreationTimestamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MLModel *model; // ivar: _model
@property (retain, nonatomic) AMDModelAssets *modelAssets; // ivar: _modelAssets
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) AMDModelMetadata *modelMetadata; // ivar: _modelMetadata
@property (readonly) Class superclass;
@property short version; // ivar: _version


+(id)getCurrentDirURLForName:(id)arg0 ;
+(id)getModelforId:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid;
-(BOOL)parseModelInfoFromBuffer:(id)arg0 error:(*id)arg1 ;
-(NSInteger)getAssetCreationTimestamp;
-(id)getId;
-(id)initWithId:(id)arg0 ;
-(id)initWithId:(id)arg0 andVersion:(short)arg1 ;
-(id)topNPredictions:(NSUInteger)arg0 usingFeatureProvider:(id)arg1 andInputBuilder:(id)arg2 andOutputBuilder:(id)arg3 withColdstartModelId:(id)arg4 error:(*id)arg5 ;
-(short)getVersion;
-(void)loadModelMetadataFromDir:(id)arg0 error:(*id)arg1 ;


@end


#endif