// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
@property NSUInteger version; // ivar: _version


+(id)getCurrentDirURLForName:(id)arg0 ;
+(id)getModelforId:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid;
-(BOOL)parseModelInfoFromBuffer:(id)arg0 error:(*id)arg1 ;
-(NSInteger)getAssetCreationTimestamp;
-(NSUInteger)getVersion;
-(id)getId;
-(id)getPredictions:(NSUInteger)arg0 andInputBuilder:(id)arg1 andOutputBuilder:(id)arg2 withColdstartModelId:(id)arg3 error:(*id)arg4 ;
-(id)initWithId:(id)arg0 ;
-(id)initWithId:(id)arg0 andVersion:(NSUInteger)arg1 ;
-(void)loadModelMetadataFromDir:(id)arg0 error:(*id)arg1 ;


@end


#endif