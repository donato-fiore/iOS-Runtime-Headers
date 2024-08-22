// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSINTERACTIONPREDICTOR_H
#define _PSINTERACTIONPREDICTOR_H

@class NSURL, NSMutableDictionary, NSDate, NSDictionary, _CDInteractionStore;

#import <Foundation/Foundation.h>

#import "_PSKNNModelConfiguration.h"

@interface _PSInteractionPredictor : NSObject

@property (retain, nonatomic) NSURL *compiledModelURL; // ivar: _compiledModelURL
@property (retain, nonatomic) NSMutableDictionary *conversationIDMap; // ivar: _conversationIDMap
@property (retain, nonatomic) NSDate *currentArchiveDate; // ivar: _currentArchiveDate
@property (retain, nonatomic) NSDictionary *currentClusterDictionary; // ivar: _currentClusterDictionary
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) _PSKNNModelConfiguration *modelConfiguration; // ivar: _modelConfiguration


+(BOOL)cloneAdaptableModelURL:(id)arg0 toFilePathURL:(id)arg1 ;
+(BOOL)removeMlmodelcFolderAtPath:(id)arg0 ;
+(id)clustersArchiveFileForDate:(id)arg0 modelName:(id)arg1 ;
+(id)defaultClustersArchiveDirectory;
+(id)getIntermediateModelURLForModelName:(id)arg0 ;
+(id)getModelURLfromName:(id)arg0 ;
+(id)loadModelFromUrl:(id)arg0 ;
+(void)deleteArchiveFileAtDate:(id)arg0 modelName:(id)arg1 ;
+(void)deleteArchiveFiles;
-(CGFloat)getMinDistanceForPt:(id)arg0 toClusters:(id)arg1 ;
-(CGFloat)timeSinceLastContactTo:(id)arg0 FromDate:(id)arg1 inTrainArray:(id)arg2 ;
-(id)convertLogToClusterPointArray:(id)arg0 ;
-(id)createMLArrayProviderFromTrainArray:(id)arg0 ;
-(id)findLatestArchiveDateBefore:(id)arg0 modelName:(id)arg1 ;
-(id)getClusterDictionaryFromTrainArray:(id)arg0 usingDBSCANParamsMinPts:(int)arg1 andEps:(CGFloat)arg2 ;
-(id)getClusteringResultsForPoint:(id)arg0 usingClusterDictionary:(id)arg1 ;
-(id)getConversationIDFromInteraction:(id)arg0 ;
-(id)getConversationIDLogFromTrainArray:(id)arg0 ;
-(id)getDateNumDays:(int)arg0 AfterDate:(id)arg1 ;
-(id)getDictionaryFromClustersArchiveAtPath:(id)arg0 ;
-(id)getLastContactedDictionaryFromTrainArray:(id)arg0 ;
-(id)getOrMakeClusterDictionaryAtDate:(id)arg0 ;
-(id)getRecencyResultsShowingNumValues:(int)arg0 fromTrainArray:(id)arg1 ;
-(id)getTrainArrayToDate:(id)arg0 withStartDateAnchor:(id)arg1 ;
-(id)initWithInteractionStore:(id)arg0 atDate:(id)arg1 withModelName:(id)arg2 modelConfiguration:(id)arg3 ;
-(id)predictAtDate:(id)arg0 usingModelAtURL:(id)arg1 showNumSuggestions:(int)arg2 ;
-(id)rankedZkwSuggestionsFromPredictionArray:(id)arg0 forBundleID:(id)arg1 ;
-(void)printModelWeights:(id)arg0 ;
-(void)trainAtDate:(id)arg0 usingCompiledModelURL:(id)arg1 andSaveToURL:(id)arg2 ;
-(void)writeArchive:(id)arg0 toFilePath:(id)arg1 ;
-(void)writeClusterArchiveFromClusterDict:(id)arg0 withDate:(id)arg1 ;


@end


#endif