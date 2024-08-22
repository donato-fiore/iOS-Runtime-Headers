// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCFILESTORAGE_H
#define WCFILESTORAGE_H

@class NSArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WCContentIndex.h"

@interface WCFileStorage : NSObject

@property (retain) WCContentIndex *fileIndex; // ivar: _fileIndex
@property (retain) NSObject<OS_dispatch_queue> *fileQueue; // ivar: _fileQueue
@property (retain) WCContentIndex *fileResultsIndex; // ivar: _fileResultsIndex
@property (retain) NSArray *outstandingFileTransfers; // ivar: _outstandingFileTransfers
@property (copy, nonatomic) NSString *pairingID; // ivar: _pairingID
@property (retain) WCContentIndex *userInfoIndex; // ivar: _userInfoIndex
@property (retain) WCContentIndex *userInfoResultsIndex; // ivar: _userInfoResultsIndex


+(id)sharedInstance;
-(BOOL)removeItemAtURL:(id)arg0 numberOfRetries:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)appContextFolderURL:(BOOL)arg0 ;
-(id)appendPathForFileTransfer:(id)arg0 toPath:(id)arg1 ;
-(id)homeDirectoryURL;
-(id)init;
-(id)loadAppContextDataFromInbox;
-(id)loadAppContextReceived:(BOOL)arg0 ;
-(id)loadOutstandingFileTransfers;
-(id)loadOutstandingUserInfoTransfersAndComplicationUserInfo:(*id)arg0 ;
-(id)localAppContextFolderURL;
-(id)outgoingFileTransferPath;
-(id)persistOutgoingUserInfoTransfer:(id)arg0 ;
-(id)receivedAppContextFolderURL;
-(void)cleanUpOldPairingIDFolderInFolder:(id)arg0 pairedDevicesPairingIDs:(id)arg1 ;
-(void)cleanUpOldPairingIDFoldersWithPairedDevicesPairingIDs:(id)arg0 ;
-(void)cleanUpWatchContentDirectoryWithCurrentAppInstallationID:(id)arg0 ;
-(void)cleanupSessionFileFromInbox:(id)arg0 ;
-(void)createWatchDirectoryIfNeeded:(id)arg0 ;
-(void)deleteAppContextDataFromInbox;
-(void)deleteAppContextReceived:(BOOL)arg0 ;
-(void)deleteFileFolderForSessionFileFromInbox:(id)arg0 ;
-(void)deleteOutstandingFileTransfer:(id)arg0 ;
-(void)deleteOutstandingUserInfoTransfer:(id)arg0 ;
-(void)deleteRelatedMetadataForSessionFileFromInbox:(id)arg0 ;
-(void)deleteUserInfoTransferFromInbox:(id)arg0 ;
-(void)enumerateFileTransferResultsWithBlock:(id)arg0 ;
-(void)enumerateIncomingFilesWithBlock:(id)arg0 ;
-(void)enumerateIncomingUserInfosWithBlock:(id)arg0 ;
-(void)enumerateUserInfoResultsWithBlock:(id)arg0 ;
-(void)persistAppContextData:(id)arg0 received:(BOOL)arg1 ;
-(void)persistOutgoingFileTransfer:(id)arg0 ;
-(void)resetIndexes;


@end


#endif