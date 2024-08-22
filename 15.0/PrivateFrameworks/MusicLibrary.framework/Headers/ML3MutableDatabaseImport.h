// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MUTABLEDATABASEIMPORT_H
#define ML3MUTABLEDATABASEIMPORT_H

@class NSFileHandle, NSString, NSData;


#import "ML3DatabaseImport.h"

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) BOOL isServerImport;
@property (copy, nonatomic) NSString *libraryPath;
@property (nonatomic, getter=isPendingMatch) BOOL pendingMatch;
@property (copy, nonatomic) NSData *playlistData;
@property (nonatomic) BOOL playlistsAreLibraryOwnedContent;
@property (nonatomic) NSInteger preferredVideoQuality;
@property (nonatomic, getter=isResetSync) BOOL resetSync;
@property (nonatomic, getter=isSagaEnabled) BOOL sagaEnabled;
@property (nonatomic) NSInteger storeAccountID;
@property (nonatomic, getter=isSuspendable) BOOL suspendable;
@property (copy, nonatomic) NSString *syncAnchor;
@property (copy, nonatomic) NSString *syncLibraryID;
@property (copy, nonatomic) NSData *trackData;
@property (nonatomic) BOOL tracksAreLibraryOwnedContent;




@end


#endif