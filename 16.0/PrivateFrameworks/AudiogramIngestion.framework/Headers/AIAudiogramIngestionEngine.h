// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AIAUDIOGRAMINGESTIONENGINE_H
#define AIAUDIOGRAMINGESTIONENGINE_H

@class VNCoreMLModel, NSString;
@protocol AIAudiogramAssetManagerDelegate, OS_dispatch_queue, AIAudiogramIngestionEngineDelegate;

#import <Foundation/Foundation.h>

#import "AIAudiogramAssetManager.h"

@interface AIAudiogramIngestionEngine : NSObject <AIAudiogramAssetManagerDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analysisQueue; // ivar: _analysisQueue
@property (retain, nonatomic) AIAudiogramAssetManager *assetManager; // ivar: _assetManager
@property (weak, nonatomic) NSObject<AIAudiogramIngestionEngineDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isRetrievingLatestModel; // ivar: _isRetrievingLatestModel
@property (nonatomic) BOOL isRetrievingLatestModelSilently; // ivar: _isRetrievingLatestModelSilently
@property (retain, nonatomic) VNCoreMLModel *model; // ivar: _model
@property (nonatomic) float modelLabelConfidenceThreshold; // ivar: _modelLabelConfidenceThreshold
@property (retain, nonatomic) NSString *modelLabelGraph; // ivar: _modelLabelGraph
@property (retain, nonatomic) NSString *modelLabelLeftEarSymbol; // ivar: _modelLabelLeftEarSymbol
@property (retain, nonatomic) NSString *modelLabelRightEarSymbol; // ivar: _modelLabelRightEarSymbol


-(BOOL)_isValidObject:(id)arg0 toObject:(id)arg1 withValueDifference:(CGFloat)arg2 stepDistance:(CGFloat)arg3 forAxis:(NSUInteger)arg4 ;
-(BOOL)isAvailable;
-(CGFloat)_meanFromNumbers:(id)arg0 ;
-(CGFloat)_stddevFromNumbers:(id)arg0 ;
-(CGFloat)_zScoreFromNumber:(CGFloat)arg0 mean:(CGFloat)arg1 stddev:(CGFloat)arg2 ;
-(id)_audiogramFromSymbols:(id)arg0 onAudiogramMap:(id)arg1 ;
-(id)_audiogramFromSymbols:(id)arg0 recognizedText:(id)arg1 ;
-(id)_audiogramMapFromRecognizedText:(id)arg0 ;
-(id)_combineAudiograms:(id)arg0 ;
-(id)_cropEdgesFromImage:(id)arg0 graphRect:(struct CGRect )arg1 symbolsRect:(struct CGRect )arg2 ;
-(id)_cropResultsFromImage:(id)arg0 observations:(id)arg1 ;
-(id)_formatNumbersFromRecognizedText:(id)arg0 ;
-(id)_groupNumbersByAxisFromRecognizedText:(id)arg0 ;
-(id)_observationsFromCIImage:(id)arg0 ;
-(id)_rectsOfGraphFromImage:(id)arg0 objectData:(id)arg1 ;
-(id)_rectsOfSymbolsFromImage:(id)arg0 objectData:(id)arg1 ;
-(id)_removeDuplicateSetsFromTextSets:(id)arg0 ;
-(id)_sortAndRemoveInvalidAxisValues:(id)arg0 forAxis:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)_textFromAudiogramImage:(id)arg0 regionOfInterest:(struct CGRect )arg1 ;
-(id)_validMapForPointPairs:(id)arg0 stepDistance:(CGFloat)arg1 forValueDifference:(CGFloat)arg2 forAxis:(NSUInteger)arg3 ;
-(id)_validPointsFromMap:(id)arg0 forValues:(id)arg1 ;
-(id)_valueDifferencesForValues:(id)arg0 stepDistance:(CGFloat)arg1 forAxis:(NSUInteger)arg2 ;
-(id)audiogramFromImage:(id)arg0 ;
-(id)audiogramFromImages:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGRect )_shrinkRect:(struct CGRect )arg0 width:(CGFloat)arg1 height:(CGFloat)arg2 insideBounds:(struct CGSize )arg3 ;
-(unsigned int)_propertyOrientationFromOrientation:(NSInteger)arg0 ;
-(void)_loadModelFromAssetPath:(id)arg0 assetProperties:(id)arg1 ;
-(void)_retrieveModel;
-(void)_setAudiogramAxisError:(NSUInteger)arg0 onError:(*id)arg1 ;
-(void)_stopRetrievingLatestModel;
-(void)audiogramFromImages:(id)arg0 completion:(id)arg1 ;
-(void)modelDidUpdate:(id)arg0 assetProperties:(id)arg1 assetVersion:(NSUInteger)arg2 withError:(id)arg3 ;
-(void)modelDownloadProgressDidUpdate:(float)arg0 ;
-(void)startRetrievingLatestModel;
-(void)startRetrievingLatestModelSilently;
-(void)useCustomModelFromURL:(id)arg0 modelProperties:(id)arg1 ;


@end


#endif