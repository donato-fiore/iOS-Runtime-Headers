// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROJECTLISTMODEL_H
#define PROJECTLISTMODEL_H

@class NSMutableArray, NSMetadataQuery;
@protocol CloudSynchDelegate;

#import <Foundation/Foundation.h>


@interface ProjectListModel : NSObject {
    NSMutableArray *m_projects;
    NSMutableArray *m_iTunesSharedProjects;
    NSMutableArray *m_jailedProjects;
    NSMutableArray *m_unscannedMedia;
}


@property (retain, nonatomic) NSMutableArray *cloudDownloadsToRestart; // ivar: _cloudDownloadsToRestart
@property NSObject<CloudSynchDelegate> *cloudSynchDelegate; // ivar: _cloudSynchDelegate
@property (retain, nonatomic) NSMutableArray *maybeInTheCloud; // ivar: _maybeInTheCloud
@property (retain, nonatomic) NSMetadataQuery *ubiquitousQuery; // ivar: _ubiquitousQuery


+(id)sharedInstance;
+(id)unscannedMediaFromPaths:(id)arg0 ;
-(BOOL)moveSafeSaveProject:(id)arg0 ;
-(id)iTunesSharedProjects;
-(id)jailedProjects;
-(id)pendingCloudProjectWithPath:(id)arg0 ;
-(id)placeHolderForProject:(id)arg0 ;
-(id)projectPathsInDirectory:(id)arg0 ;
-(id)projectPathsInDirectory:(id)arg0 otherPaths:(*id)arg1 ;
-(id)projectPathsInImportExportDirectoryAndOtherPaths:(*id)arg0 ;
-(id)projectPathsInPrivateDocumentsDirectory;
-(id)projectWithPath:(id)arg0 ;
-(id)projects;
-(id)unscannedMedia;
-(int)pendingCloudProjectsCount;
-(void)addProject:(id)arg0 ;
-(void)addQueryObservers;
-(void)appendJailedProject:(id)arg0 ;
-(void)appendProject:(id)arg0 ;
-(void)appendiTunesSharedProject:(id)arg0 ;
-(void)createProjectPlaceholders;
-(void)dealloc;
-(void)deleteProject:(id)arg0 ;
-(void)deleteUneditedProject:(id)arg0 ;
-(void)didStart:(id)arg0 ;
-(void)didUpdate:(id)arg0 ;
-(void)duplicateProject:(id)arg0 completionHandler:(id)arg1 ;
-(void)finishGathering:(id)arg0 ;
-(void)gathering:(id)arg0 ;
-(void)loadProjectAtIndex:(NSUInteger)arg0 ;
-(void)moveJailedProjectToPrivateProject:(id)arg0 ;
-(void)noteApplicationWillTerminate:(id)arg0 ;
-(void)projectPathDidChange:(id)arg0 ;
-(void)queryTheCloud;
-(void)queueTrashOrphanedRenderedMovies;
-(void)removeProject:(id)arg0 ;
-(void)removeQueryObservers;
-(void)skeletalProjectDidDownload:(id)arg0 ;
-(void)startCloudQuery;
-(void)stopCloudQuery;
-(void)trashOrphanedRenderedMovies;
-(void)undeleteProject:(id)arg0 ;
-(void)unloadAllExceptProject:(id)arg0 ;
-(void)unloadProject:(id)arg0 ;
-(void)unloadProjectAtIndex:(NSUInteger)arg0 ;
-(void)verifyCloudDownloads;


@end


#endif