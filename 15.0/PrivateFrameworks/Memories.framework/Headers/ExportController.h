// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXPORTCONTROLLER_H
#define EXPORTCONTROLLER_H

@class NSString, NSArray, NSTimer;
@protocol ExportDelegate, MovieControllerExportProtocol;

#import <Foundation/Foundation.h>

#import "Project.h"
#import "BEAlertController.h"

@interface ExportController : NSObject {
    BOOL m_inTestMode;
    BOOL m_usingExistingRenderFile;
}


@property (retain, nonatomic) NSString *currentPreset; // ivar: m_currentPreset
@property (weak, nonatomic) NSObject<ExportDelegate> *delegate; // ivar: m_delegate
@property (nonatomic) CGFloat exportAspect; // ivar: _exportAspect
@property (retain, nonatomic) NSString *exportPath; // ivar: m_exportPath
@property (nonatomic) BOOL exportToPhotos; // ivar: m_exportToPhotos
@property (retain, nonatomic) NSArray *exportedPaths; // ivar: _exportedPaths
@property (nonatomic) NSUInteger exportingIndexPresets; // ivar: m_exportingIndexPresets
@property (retain, nonatomic) NSObject<MovieControllerExportProtocol> *movieController; // ivar: m_movieController
@property (retain, nonatomic) NSArray *presets; // ivar: m_presets
@property (retain, nonatomic) NSTimer *progressTimer; // ivar: m_progressTimer
@property (retain, nonatomic) Project *project; // ivar: m_project
@property (retain, nonatomic) BEAlertController *testModeAutoExportCompletedAlert; // ivar: m_testModeAutoExportCompletedAlert


+(BOOL)inTestMode;
+(BOOL)testModeCopyToCameraRoll;
+(BOOL)testModeNoDialogAtEnd;
+(Class)exportControllerClass;
+(NSUInteger)audioDataRateForPreset:(id)arg0 ;
+(NSUInteger)dataRateForPreset:(id)arg0 ;
+(NSUInteger)dataRateForiCloud4G;
+(NSUInteger)dataRateForiCloudHD;
+(NSUInteger)estimatedVideoFileSizeForDuration:(int)arg0 frameRate:(CGFloat)arg1 preset:(id)arg2 project:(id)arg3 ;
+(NSUInteger)testModeMaxFrameToProcess;
+(NSUInteger)testModeRepeatCount;
+(NSUInteger)testModeType;
+(NSUInteger)videoDataRateForPreset:(id)arg0 ;
+(id)currentTitle:(NSUInteger)arg0 ;
+(id)testModeProject:(id)arg0 ;
+(id)testModeProjectBundle;
+(id)testModeProjectPlaceholder;
+(void)exitTestMode;
-(float)progress;
-(id)hasExistingFile;
-(id)initWithWithProject:(id)arg0 presets:(id)arg1 exportToPhotos:(BOOL)arg2 delegate:(id)arg3 ;
-(id)metadataToAdd;
-(id)thumbnailImage;
-(void)beginAsynchronousExport;
-(void)cancelExport;
-(void)closeSession;
-(void)continueExportAfterDelay;
-(void)createMovieController;
-(void)dealloc;
-(void)displayAlertTitle:(id)arg0 message:(id)arg1 ;
-(void)displayDiskSpaceError;
-(void)displayError:(id)arg0 ;
-(void)displayExportedToPhotos;
-(void)informDelegateOfCompletion;
-(void)nextPreset;
-(void)noteSessionProgressed:(float)arg0 ;
-(void)releaseMovieController;
-(void)serviceProgressTimer:(id)arg0 ;
-(void)startProgressTimer;
-(void)stopProgressTimer;
-(void)updateProgressViewWithProgress:(float)arg0 reduced:(BOOL)arg1 ;
-(void)writeVideoFileToSavedPhotoAlbum:(id)arg0 ;


@end


#endif