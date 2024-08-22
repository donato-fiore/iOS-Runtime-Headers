// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSCORENORMALIZATIONDRIVER_H
#define ATXSCORENORMALIZATIONDRIVER_H

@class ATXBMBookmark, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ATXScoreNormalizationDriver : NSObject

@property (retain, nonatomic) ATXBMBookmark *scoreHarvestingStreamBookmark; // ivar: _scoreHarvestingStreamBookmark
@property (retain, nonatomic) NSMutableDictionary *scoreNormalizationModelsDict; // ivar: _scoreNormalizationModelsDict


+(id)defaultArchivePath;
+(void)deleteArchiveFile;
-(BOOL)addScoreForModelWithClientModelId:(id)arg0 clientModelVersion:(id)arg1 score:(id)arg2 ;
-(BOOL)registerModelWithClientModelId:(id)arg0 clientModelVersion:(id)arg1 normalizationParameters:(id)arg2 ;
-(id)_normalizeScoreHelper:(id)arg0 modelKey:(id)arg1 ;
-(id)getNormalizationModelWithClientModelId:(id)arg0 clientModelVersion:(id)arg1 ;
-(id)getNormalizationModelsDict;
-(id)getOrMakeScoreNormalizationModelsDictionary;
-(id)getPayloadFromArchiveAtPath:(id)arg0 ;
-(id)getUniqueModelKeyForClientModelId:(id)arg0 clientModelVersion:(id)arg1 ;
-(id)init;
-(id)normalizeScore:(id)arg0 clientModelId:(id)arg1 clientModelVersion:(id)arg2 ;
-(void)initStreamBookmark;
-(void)modelScoreHarvesting;
-(void)persistBookmark;
-(void)writeArchive:(id)arg0 toFilePath:(id)arg1 ;
-(void)writeArchiveFromDict:(id)arg0 ;


@end


#endif