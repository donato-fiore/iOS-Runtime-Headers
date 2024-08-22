// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDATTACHMENTHANDLER_H
#define DEDATTACHMENTHANDLER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDAttachmentHandler : NSObject

@property BOOL compressOnAttach; // ivar: _compressOnAttach
@property (retain) NSObject<OS_os_log> *log; // ivar: _log


-(NSUInteger)directorySizeForBugSessionIdentifier:(id)arg0 ;
-(id)_createEmptyMessageFileForDE:(id)arg0 extensionName:(id)arg1 withSessionIdentifier:(id)arg2 device:(id)arg3 withRootDir:(id)arg4 ;
-(id)_processAttachments:(id)arg0 withSessionIdentifier:(id)arg1 extension:(id)arg2 rootDir:(id)arg3 ;
-(id)_processAttachments:(id)arg0 withSessionIdentifier:(id)arg1 extension:(id)arg2 shouldAddClassBDataProtection:(BOOL)arg3 rootDir:(id)arg4 ;
-(id)collectedGroupsWithSessionIdentifier:(id)arg0 matchingExtensions:(id)arg1 ;
-(id)createEmptyMessageFileForDE:(id)arg0 extensionName:(id)arg1 withSessionIdentifier:(id)arg2 device:(id)arg3 ;
-(id)dedDirectory;
-(id)directoryForBugSessionIdentifier:(id)arg0 ;
-(id)directoryForBugSessionIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)directoryForBugSessionWithIdentifier:(id)arg0 extension:(id)arg1 rootDirectory:(id)arg2 ;
-(id)directoryForBugSessionWithIdentifier:(id)arg0 extension:(id)arg1 rootDirectory:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)directoryForBugSessionWithIdentifier:(id)arg0 rootDirectory:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)extensionsWithFilesAttachedToSessionWithID:(id)arg0 allExtensions:(id)arg1 ;
-(id)identifierForAdoptingFile:(id)arg0 ;
-(id)init;
-(id)processAttachments:(id)arg0 withSessionIdentifier:(id)arg1 extension:(id)arg2 shouldAddClassBDataProtection:(BOOL)arg3 ;
-(void)removeDEFiles:(id)arg0 withSessionIdentifier:(id)arg1 ;
-(void)removeDirectoryForBugSessionIdentifier:(id)arg0 ;


@end


#endif