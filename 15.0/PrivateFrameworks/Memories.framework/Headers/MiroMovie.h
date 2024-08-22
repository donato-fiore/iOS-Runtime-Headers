// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROMOVIE_H
#define MIROMOVIE_H

@class PHAssetCollection, NSString, NSSet, PHAsset, AVPlayerItem, UIViewController;
@protocol ExportDelegate, MiroMovieDelegate;

#import <Foundation/Foundation.h>

#import "MiroAutoEditor.h"
#import "MiroExportController.h"
#import "PregenerateHelper.h"
#import "MiroMemory.h"

@interface MiroMovie : NSObject <ExportDelegate>



@property (nonatomic) BOOL allowNonPHMemoryForUnitTesting; // ivar: _allowNonPHMemoryForUnitTesting
@property (weak, nonatomic) id *associatedPlayerViewController; // ivar: _associatedPlayerViewController
@property (retain) MiroAutoEditor *autoEditor; // ivar: _autoEditor
@property (retain, nonatomic) PHAssetCollection *collection; // ivar: _collection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *defaultAssets;
@property (weak, nonatomic) NSObject<MiroMovieDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MiroExportController *exportController; // ivar: _exportController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PregenerateHelper *helper; // ivar: _helper
@property (retain, nonatomic) PHAsset *keyAsset; // ivar: _keyAsset
@property (retain, nonatomic) MiroMemory *memory; // ivar: _memory
@property (retain, nonatomic) NSString *outputString; // ivar: _outputString
@property (retain) AVPlayerItem *playerItem; // ivar: _playerItem
@property (readonly, nonatomic) UIViewController *playerViewController;
@property (readonly) Class superclass;


+(BOOL)runTest:(id)arg0 options:(id)arg1 usingPlayerViewController:(id)arg2 ;
-(BOOL)isCompelling;
-(CGFloat)maximumDuration;
-(NSInteger)mood;
-(float)duration;
-(id)_getMiroTapToRadarFilePath;
-(id)_tapToRadarBlueprint;
-(id)_tapToRadarDebug;
-(id)_tapToRadarMediaanalysis_db;
-(id)_tapToRadarMediaanalysis_db_shm;
-(id)_tapToRadarMediaanalysis_db_wal;
-(id)_tapToRadarMemory;
-(id)_tapToRadarPicklist;
-(id)_tapToRadarRanges;
-(id)availableSongs;
-(id)availableTitleStyles;
-(id)createPHMemory;
-(id)dataRepresentation;
-(id)diagnosticItemProvider;
-(id)exportSessionWithPresetName:(id)arg0 ;
-(id)init;
-(id)initWithDataRepresentation:(id)arg0 ;
-(id)moodIDmap;
-(id)production;
-(id)songID;
-(id)subtitle;
-(id)title;
-(id)titleStyle;
// -(void)_exportProject:(id)arg0 presets:(id)arg1 progressHandler:(id)arg2 completionHandler:(unk)arg3  ;
// -(void)_generateProjectWithProgressHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_teardownInternals;
-(void)_testPregenerateWithCompletion:(id)arg0 ;
-(void)addAsset:(id)arg0 ;
-(void)cancelPregenerateMovie;
-(void)cancelPrepareForPlayback;
-(void)dealloc;
-(void)didFinishExport;
-(void)exportController:(id)arg0 progressedTo:(float)arg1 preventBackslide:(BOOL)arg2 ;
// -(void)exportWithPresets:(id)arg0 progressHandler:(id)arg1 completionHandler:(unk)arg2  ;
// -(void)generateProjectWithProgressHandler:(id)arg0 completionHandler:(unk)arg1  ;
// -(void)playerItemWithProgressHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)pregenerateMovieWithCompletionHandler:(id)arg0 ;
-(void)prepareForPlayback;
-(void)removeAsset:(id)arg0 ;
-(void)removeClip:(id)arg0 ;
-(void)setDuration:(float)arg0 ;
-(void)setMood:(NSInteger)arg0 ;
-(void)setRangeOfInterest:(struct ? )arg0 forClip:(id)arg1 ;
-(void)setSongID:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitleStyle:(id)arg0 ;
-(void)setVolume:(NSUInteger)arg0 forClip:(id)arg1 ;
-(void)tapToRadar;


@end


#endif