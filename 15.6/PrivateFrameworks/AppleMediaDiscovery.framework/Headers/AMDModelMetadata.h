// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMDMODELMETADATA_H
#define AMDMODELMETADATA_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "AMDModelAssetsMetadata.h"

@interface AMDModelMetadata : NSObject

@property (retain, nonatomic) AMDModelAssetsMetadata *assetsMetadata; // ivar: _assetsMetadata
@property (retain, nonatomic) NSMutableDictionary *inputsMetadata; // ivar: _inputsMetadata
@property char modelArchType; // ivar: _modelArchType
@property (retain, nonatomic) NSString *modelId; // ivar: _modelId
@property (retain, nonatomic) NSString *modelUid; // ivar: _modelUid
@property (retain, nonatomic) NSMutableDictionary *outputsMetadata; // ivar: _outputsMetadata


-(BOOL)isValid;
-(char)getModelArchType;
-(id)getAssetsMetadata;
-(id)getInputsMetadata;
-(id)getModelUid;
-(id)getOutputsMetadata;
-(id)initWithMetadataJSON:(id)arg0 error:(*id)arg1 ;


@end


#endif