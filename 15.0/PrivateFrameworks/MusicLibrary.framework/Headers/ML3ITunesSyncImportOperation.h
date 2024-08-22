// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ITUNESSYNCIMPORTOPERATION_H
#define ML3ITUNESSYNCIMPORTOPERATION_H

@class NSMutableDictionary, NSMutableSet;


#import "ML3ImportOperation.h"

@interface ML3ITunesSyncImportOperation : ML3ImportOperation {
    BOOL _sagaIsEnabled;
    BOOL _resetSync;
    NSMutableDictionary *_cachedPIDToFilePathMap;
    NSMutableDictionary *_cachedPIDToLocationPropertyMap;
    NSMutableDictionary *_cachedSyncIDsToPIDsMap;
    NSMutableSet *_importedPlaylists;
    NSInteger _devicePrimaryContainer;
}




-(BOOL)_performImportFromPlistFiles:(id)arg0 withTransaction:(id)arg1 ;
-(BOOL)_performImportOfTrackData:(id)arg0 WithTransaction:(id)arg1 ;
-(BOOL)_performImportWithTransaction:(id)arg0 ;
-(BOOL)_processDeletePlaylistOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processDeleteTrackOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processInsertPlaylistOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processInsertTrackOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processSyncOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processUpdateDBInfoOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processUpdatePlaylistOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(BOOL)_processUpdateTrackOperation:(id)arg0 withImportSession:(*void)arg1 ;
-(NSUInteger)importSource;
-(id)_dbInfoValuesForStep:(id)arg0 ;
-(id)_syncOperationsFromPlistFile:(id)arg0 ;
-(id)_syncPlistFilesFromDirectory:(id)arg0 ;
-(void)_archiveSyncPlistFiles;
-(void)_processGeniusConfigPlist:(id)arg0 ;
-(void)_recoverExistingAsset:(id)arg0 forTrackId:(NSInteger)arg1 ;
-(void)main;


@end


#endif