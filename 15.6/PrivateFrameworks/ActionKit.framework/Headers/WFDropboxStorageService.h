// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDROPBOXSTORAGESERVICE_H
#define WFDROPBOXSTORAGESERVICE_H

@class INAppDescriptor, NSString;
@protocol WFFileStorageService;

#import <Foundation/Foundation.h>


@interface WFDropboxStorageService : NSObject <WFFileStorageService>



@property (readonly, nonatomic) Class accessResourceClass;
@property (readonly, nonatomic) INAppDescriptor *associatedAppDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasPublicURLs;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) Class objectRepresentationClass;
@property (readonly, nonatomic) NSString *storageLocationPrefix;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsJumpingToSubdirectoryInUI;


+(Class)resultItemClass;
+(id)serviceName;
-(id)associatedAppBundleIdentifier;
-(id)saveFiles:(id)arg0 withManagedLevel:(NSUInteger)arg1 toPath:(id)arg2 options:(NSUInteger)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)appendText:(id)arg0 toPath:(id)arg1 options:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)createFolderAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteFiles:(id)arg0 deleteImmediately:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)finishRetrievalWithContentsOfFolderAtPath:(id)arg0 sessionManager:(id)arg1 retrievalHandler:(id)arg2 ;
-(void)getSharingURLsForFiles:(id)arg0 usePublicURLs:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)retrieveFilesAtPath:(id)arg0 options:(NSUInteger)arg1 progress:(id)arg2 completionHandler:(id)arg3 ;
-(void)searchFiles:(id)arg0 inPath:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif