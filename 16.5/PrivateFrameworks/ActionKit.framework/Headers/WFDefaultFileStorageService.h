// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDEFAULTFILESTORAGESERVICE_H
#define WFDEFAULTFILESTORAGESERVICE_H

@class INAppDescriptor, NSString, NSProgress;
@protocol WFFileStorageService;

#import <Foundation/Foundation.h>


@interface WFDefaultFileStorageService : NSObject <WFFileStorageService>



@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) INAppDescriptor *associatedAppDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class objectRepresentationClass;
@property (weak, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;


+(Class)resultItemClass;
+(id)containerName;
+(id)directoryTraversalError;
+(id)serviceName;
-(id)_saveFiles:(id)arg0 toURL:(id)arg1 isDestinationKnownDirectory:(BOOL)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(id)fileURLFromDirectory:(id)arg0 path:(id)arg1 ;
-(id)saveFiles:(id)arg0 withManagedLevel:(NSUInteger)arg1 toDirectory:(id)arg2 subpath:(id)arg3 options:(NSUInteger)arg4 progress:(id)arg5 completionHandler:(id)arg6 ;
-(id)saveFiles:(id)arg0 withManagedLevel:(NSUInteger)arg1 toPath:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)_moveFile:(id)arg0 replaceExisting:(BOOL)arg1 withManagedLevel:(NSUInteger)arg2 toDestination:(id)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)_retrieveFilesForAppendingAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)appendText:(id)arg0 toDirectory:(id)arg1 subpath:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)appendText:(id)arg0 toPath:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)createFolderAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)createFolderAtPath:(id)arg0 inDirectory:(id)arg1 completionHandler:(id)arg2 ;
-(void)createFolderAtPath:(id)arg0 parentDirectoryItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)deleteFiles:(id)arg0 deleteImmediately:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deleteItems:(id)arg0 deleteImmediately:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)getSharingURLsForFiles:(id)arg0 usePublicURLs:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)moveFile:(id)arg0 destination:(id)arg1 withManagedLevel:(NSUInteger)arg2 progress:(id)arg3 completionHandler:(id)arg4 ;
-(void)moveFile:(id)arg0 replaceExisting:(BOOL)arg1 withManagedLevel:(NSUInteger)arg2 toDirectory:(id)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)moveItem:(id)arg0 replaceExisting:(BOOL)arg1 withManagedLevel:(NSUInteger)arg2 toDirectory:(id)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)recursivelyCreateFolderAtPathWithComponents:(id)arg0 withParentDirectoryItem:(id)arg1 completionHandler:(id)arg2 ;
-(void)renameItem:(id)arg0 name:(id)arg1 withManagedLevel:(NSUInteger)arg2 progress:(id)arg3 completionHandler:(id)arg4 ;
-(void)retrieveFileAtPath:(id)arg0 fromDirectory:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)retrieveFilesAtPath:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completionHandler:(id)arg3 ;
-(void)retrieveFilesForAppendingAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)searchFiles:(id)arg0 inPath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif