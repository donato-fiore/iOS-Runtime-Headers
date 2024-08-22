// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCITYNATUREMODEL_H
#define CLSCITYNATUREMODEL_H

@class NSString;
@protocol CLSClassificationBasedSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSCityNatureModel : NSObject <CLSClassificationBasedSignalModel>



@property (readonly) CLSSignalNode *cityNatureishNode; // ivar: _cityNatureishNode
@property (readonly) CLSSignalNode *cityNode; // ivar: _cityNode
@property (readonly) CGFloat cityscapeWallpaperSuggestionCityThreshold; // ivar: _cityscapeWallpaperSuggestionCityThreshold
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *natureNode; // ivar: _natureNode
@property (readonly) Class superclass;
@property (readonly) NSUInteger version; // ivar: _version


+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
+(void)enumerateModelsAscending:(BOOL)arg0 usingBlock:(id)arg1 ;
-(BOOL)isResponsibleForSignalIdentifier:(NSUInteger)arg0 ;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(id)modelInfo;
-(id)nodeForSignalIdentifier:(NSUInteger)arg0 ;
-(void)processSignals:(id)arg0 intoProcessedSignals:(id)arg1 ;
-(void)setupVersion82;
-(void)setupVersion85;


@end


#endif