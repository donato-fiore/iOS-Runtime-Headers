// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROAUTOEDITCONTROLLER_H
#define MIROAUTOEDITCONTROLLER_H

@class NSString, NSMapTable;
@protocol MiroAutoEditDelegate;

#import <Foundation/Foundation.h>

#import "MiroMemory.h"
#import "MiroRandomNumberGenerator.h"
#import "MiroAutoEditLogger.h"
#import "MovieController.h"
#import "MiroAutoEditProjectPolish.h"
#import "Project.h"
#import "MiroAutoEdit_TrimController.h"

@interface MiroAutoEditController : NSObject <MiroAutoEditDelegate>



@property (retain, nonatomic) MiroMemory *activeMemory; // ivar: _activeMemory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MiroRandomNumberGenerator *kenBurnsRandomNumberGenerator; // ivar: _kenBurnsRandomNumberGenerator
@property (retain, nonatomic) MiroAutoEditLogger *logger; // ivar: _logger
@property (retain, nonatomic) MovieController *movieController; // ivar: _movieController
@property (nonatomic) CGSize naturalSize; // ivar: _naturalSize
@property (retain, nonatomic) MiroAutoEditProjectPolish *polisher; // ivar: _polisher
@property (retain, nonatomic) Project *project; // ivar: _project
@property (nonatomic) BOOL shouldBuildMovieController; // ivar: _shouldBuildMovieController
@property (nonatomic) BOOL shouldSkipPolish; // ivar: _shouldSkipPolish
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL titleIsSupported;
@property (retain, nonatomic) MiroAutoEdit_TrimController *trimController; // ivar: _trimController
@property (retain, nonatomic) NSMapTable *trimRangeForClipMap; // ivar: _trimRangeForClipMap


+(id)localImageRequestOptions;
-(id)_fetchStoreItemForMediaID:(NSUInteger)arg0 ;
-(id)_makePolisher;
-(id)candidateAssetsForAutoCropAnalysis;
-(id)candidateAssetsForSaliencyAnalysis;
-(void)_finishPolisher;
-(void)_incrementCountForKey:(id)arg0 inDictionary:(id)arg1 ;
-(void)_removeSpeedRampFromBeginningOfClip:(id)arg0 ;
-(void)_removeSpeedRampFromEndOfClip:(id)arg0 ;
-(void)applyAutomaticThemeTitleToFirstClip;
-(void)autoEditToDuration:(int)arg0 ;
-(void)runRealTimeSaliencyModels;


@end


#endif