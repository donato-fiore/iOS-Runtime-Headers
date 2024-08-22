// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLSECUREMODEL_H
#define MLSECUREMODEL_H

@class NSXPCConnection;
@protocol MLModeling, NSSecureCoding, CoreMLModelSecurityProtocol;


#import "MLModel.h"
#import "MLModelMetadata.h"
#import "MLModelDescription.h"

@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding>



@property (retain, nonatomic) NSXPCConnection *connectionToModelSecurityService; // ivar: _connectionToModelSecurityService
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (retain, nonatomic) NSObject<CoreMLModelSecurityProtocol> *secureModelProxy; // ivar: _secureModelProxy


+(BOOL)supportsSecureCoding;
+(id)modelWithContentsOfURL:(id)arg0 configuration:(id)arg1 decryptCredential:(id)arg2 error:(*id)arg3 ;
+(id)modelWithContentsOfURL:(id)arg0 decryptCredential:(id)arg1 error:(*id)arg2 ;
+(id)sandboxExtensionPathsForModelURL:(id)arg0 ;
+(id)sandboxExtensionTokenForModelURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)parameterValueForKey:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 error:(*id)arg1 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 error:(*id)arg1 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif