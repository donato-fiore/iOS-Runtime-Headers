// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGEXTRACTIONMODEL_H
#define SGEXTRACTIONMODEL_H


#import <Foundation/Foundation.h>


@interface SGExtractionModel : NSObject



+(NSUInteger)featureDimensionForInputSection:(id)arg0 forModel:(id)arg1 ;
+(id)argMaxForLastOutput:(id)arg0 ;
+(id)argMaxForOutputIndex:(id)arg0 index:(int)arg1 shape:(id)arg2 ;
+(id)argMaxForSequence:(id)arg0 ;
+(id)enrichTaggedCharacterRangesWithModelOutput:(id)arg0 usingInputCharacterRanges:(id)arg1 ;
+(id)inputDictFromTaggedCharacterRanges:(id)arg0 usingTokenMapping:(id)arg1 forModel:(id)arg2 ;
+(id)inputDictFromTaggedCharacterRanges:(id)arg0 usingTokenMapping:(id)arg1 forModel:(id)arg2 pflTraining:(BOOL)arg3 hasEvent:(BOOL)arg4 ;
+(id)loadLazyPlistWithBasename:(id)arg0 ;
+(id)modelOutputFromOutputMapping:(id)arg0 modelOutput:(id)arg1 modelInput:(id)arg2 ;
+(id)modelsDirectoryName;
+(void)cleanLegacyModelsDirectoryOfModelsNamed:(id)arg0 ;
+(void)cleanModelAssets;
+(void)cleanModelsDirectoryOfModelsNamed:(id)arg0 ;
+(void)writeDummyRecordInStore;
+(void)writeToBiomeStreamWithInput:(id)arg0 ;
-(id)currentModelURLForModelName:(id)arg0 ;


@end


#endif