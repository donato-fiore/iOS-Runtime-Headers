// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANNOUNCEMENTSTORAGEMANAGER_H
#define ANANNOUNCEMENTSTORAGEMANAGER_H

@class NSString, NSUserDefaults, NSFileManager;
@protocol NSFileManagerDelegate;

#import <Foundation/Foundation.h>


@interface ANAnnouncementStorageManager : NSObject <NSFileManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)fileManager:(id)arg0 shouldProceedAfterError:(id)arg1 removingItemAtURL:(id)arg2 ;
-(id)_announcementDataDirectoryForType:(id)arg0 endpointID:(id)arg1 error:(*id)arg2 ;
-(id)_baseDirectoryURLForEndpointID:(id)arg0 error:(*id)arg1 ;
-(id)_cachesURLWithError:(*id)arg0 ;
-(id)_saveAudioDataForAnnouncement:(id)arg0 endpointID:(id)arg1 ;
-(id)storedAnnouncementsForEndpointID:(id)arg0 ;
-(void)_removeAudioDataForAnnouncementID:(id)arg0 endpointID:(id)arg1 ;
-(void)_removeDirectoryForEndpointsExcludingEndpointIDs:(id)arg0 ;
-(void)_removeMetadataForAnnouncementID:(id)arg0 endpointID:(id)arg1 ;
-(void)_saveMetadataForAnnouncement:(id)arg0 endpointID:(id)arg1 ;
-(void)deleteAnnouncementWithID:(id)arg0 endpointID:(id)arg1 ;
-(void)deleteAnnouncementsExcludingAnnouncementsForEndpointIDs:(id)arg0 ;
-(void)removeAnnouncementDataExcludingDataForAnnouncementIDs:(id)arg0 endpointID:(id)arg1 ;
-(void)saveAnnouncement:(id)arg0 endpointID:(id)arg1 ;


@end


#endif