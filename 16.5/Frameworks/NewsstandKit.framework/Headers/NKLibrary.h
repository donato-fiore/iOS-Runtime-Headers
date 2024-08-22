// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NKLIBRARY_H
#define NKLIBRARY_H

@class NSArray, NSMapTable, NSURL, NSFileManager;

#import <Foundation/Foundation.h>

#import "NKIssue.h"

@interface NKLibrary : NSObject {
    NSArray *_issues;
    NKIssue *_currentlyReadingIssue;
    NSMapTable *_issuesByName;
    NSMapTable *_issuesByDirectory;
    NSURL *_contentURL;
    NSFileManager *_fileManager;
    NSURL *_appSupportURL;
    NSURL *_libraryURL;
    BOOL _inited;
    int _needsSaving;
    int _savePending;
    NSArray *_assetsFromLaunch;
}


@property (retain) NKIssue *currentlyReadingIssue;
@property (readonly) NSArray *downloadingAssets;
@property (readonly) NSArray *issues;


+(BOOL)_isNewsstandApp;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedLibrary;
-(BOOL)_canPerformBackgroundDownloads;
-(NSUInteger)retainCount;
-(id)_appSupportURL;
-(id)_contentURL;
-(id)_fileManager;
-(id)_issueForDirectory:(id)arg0 ;
-(id)_libraryURL;
-(id)addIssueWithName:(id)arg0 date:(id)arg1 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)issueWithName:(id)arg0 ;
-(id)retain;
-(void)__actuallySave;
-(void)_applicationDidEnterBackground:(id)arg0 ;
-(void)_applicationWillTerminate:(id)arg0 ;
-(void)_didFinishLaunchingWasCalled;
-(void)_issueChanged:(id)arg0 ;
-(void)_load;
-(void)_markAsDirtyAndSave;
-(void)_markIssuesAndSave;
// -(void)_performBackgroundTask:(id)arg0 withDescription:(unk)arg1  ;
-(void)_saveIfNeeded;
-(void)_saveIfNeededAfterDelay:(CGFloat)arg0 ;
-(void)_saveNowIfNeeded;
-(void)release;
-(void)removeIssue:(id)arg0 ;


@end


#endif