// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHMEDIALIBRARY_H
#define SHMEDIALIBRARY_H

@class NSString;
@protocol SHLibrarySyncDelegate, SHLibrarySync;

#import <Foundation/Foundation.h>

#import "SHLibrarySyncResult.h"

@interface SHMediaLibrary : NSObject <SHLibrarySyncDelegate, SHLibrarySync>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHLibrarySyncDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SHLibrarySync> *remoteLibrary; // ivar: _remoteLibrary
@property (readonly) Class superclass;
@property (retain, nonatomic) SHLibrarySyncResult *syncResult; // ivar: _syncResult


+(id)defaultLibrary;
-(id)initWithRemoteLibrary:(id)arg0 ;
-(void)addMediaItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchLibraryTracksForCurrentProcessWithLimit:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)fetchLibraryTracksWithLimit:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)library:(id)arg0 didChangeTracksWithDifference:(id)arg1 ;
-(void)library:(id)arg0 didProduceError:(id)arg1 failedItemIdentifiers:(id)arg2 ;
-(void)libraryDidCompleteSync:(id)arg0 ;
-(void)libraryWillBeginSync:(id)arg0 ;
-(void)synchronize;
-(void)synchronizeDifference:(id)arg0 ;
-(void)synchronizeDifference:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateTracks:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif