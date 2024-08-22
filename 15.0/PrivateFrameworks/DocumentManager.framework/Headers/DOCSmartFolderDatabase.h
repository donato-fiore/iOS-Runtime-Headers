// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DOCSMARTFOLDERDATABASE_H
#define DOCSMARTFOLDERDATABASE_H

@class PQLConnection, RBSAssertion, NSURL;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DOCSmartFolderDatabase : NSObject

@property (readonly, nonatomic) PQLConnection *connection; // ivar: _connection
@property (retain, nonatomic) RBSAssertion *processAssertion; // ivar: _processAssertion
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watcher; // ivar: _watcher
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // ivar: _workingQueue


-(id)_createDatabaseIfNeededAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_existingEventSimilarToEvent:(id)arg0 ;
-(id)_existingFileNameHitsSimilarToHit:(id)arg0 ;
-(id)_existingFiletypeHitSimilarToHit:(id)arg0 ;
-(id)_openConnectionToDatabaseAtURL:(id)arg0 ;
-(id)_setupDatabaseTablesIfNeeded:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)previousEventsForAppBundleIdentifier:(id)arg0 excluding:(id)arg1 ;
-(id)previousHits;
-(void)_cleanUpAfterClose;
-(void)_closeDatabaseOnItsQueue:(id)arg0 ;
-(void)_registerHit:(id)arg0 ;
-(void)_registerSavingFile:(id)arg0 inFolder:(id)arg1 atDate:(id)arg2 withFrecencyScore:(CGFloat)arg3 rowId:(id)arg4 ;
-(void)_registerSavingFileType:(id)arg0 inFolder:(id)arg1 atDate:(id)arg2 withFrecencyScore:(CGFloat)arg3 rowId:(id)arg4 ;
-(void)_resetDatabaseOnItsQueue:(id)arg0 ;
-(void)_setUpDatabaseWatcher:(id)arg0 ;
-(void)close;
-(void)deleteFolderWithIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(void)logError:(id)arg0 onDB:(id)arg1 statement:(id)arg2 ;
-(void)open;
-(void)registerEvent:(id)arg0 ;
-(void)registerFilenameHit:(id)arg0 fileTypeHit:(id)arg1 smartScoreBlock:(id)arg2 ;


@end


#endif