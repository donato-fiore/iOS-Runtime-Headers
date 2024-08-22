// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGSTRUCTUREDEVENTEXTRACTIONMODEL_H
#define SGSTRUCTUREDEVENTEXTRACTIONMODEL_H

@class _PASNotificationToken, NSDictionary;


#import "SGExtractionModel.h"

@interface SGStructuredEventExtractionModel : SGExtractionModel {
    _PASNotificationToken *_assetUpdateToken;
    NSDictionary *_inputMapping;
    NSDictionary *_outputMapping;
    NSDictionary *_supportedProviders;
    NSDictionary *_engineConfig;
}




+(id)inputFromTaggedCharacterRanges:(id)arg0 usingInputMapping:(id)arg1 forModel:(id)arg2 pflTraining:(BOOL)arg3 hasEvent:(BOOL)arg4 ;
+(id)sharedInstance;
-(BOOL)isSenderSupportedForExtraction:(id)arg0 ;
-(BOOL)isSenderSupportedForMLDefaultExtraction:(id)arg0 ;
-(BOOL)isSenderSupportedForPFLTraining:(id)arg0 ;
-(BOOL)isSenderSupportedForShadowExtraction:(id)arg0 ;
-(NSUInteger)addressComponentThreshold;
-(NSUInteger)maxMergeDistanceForSection:(id)arg0 label:(id)arg1 ;
-(NSUInteger)stripRepeatedContentForSectionLength:(id)arg0 label:(id)arg1 ;
-(id)_init;
-(id)engineConfig;
-(id)gazetteer;
-(id)inputMapping;
-(id)loadModel;
-(id)modelInferences:(id)arg0 ;
-(id)modelInferences:(id)arg0 pflTraining:(BOOL)arg1 hasEvent:(BOOL)arg2 ;
-(id)outputMapping;
-(id)supportedProviders;
-(void)updateAll;


@end


#endif