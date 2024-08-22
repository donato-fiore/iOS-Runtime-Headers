// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHMEDIALIBRARY_H
#define SHMEDIALIBRARY_H

@class NSString;
@protocol SHMediaLibrarySyncDelegate, SHMediaLibrary;

#import <Foundation/Foundation.h>

#import "SHMediaLibraryContext.h"

@interface SHMediaLibrary : NSObject <SHMediaLibrarySyncDelegate, SHMediaLibrary>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHMediaLibrarySyncDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SHMediaLibraryContext *libraryContext; // ivar: _libraryContext
@property (retain, nonatomic) NSObject<SHMediaLibrary> *remoteLibrary; // ivar: _remoteLibrary
@property (readonly) Class superclass;


+(id)defaultLibrary;
-(id)initWithRemoteLibrary:(id)arg0 ;
-(void)_library:(id)arg0 didChangeWithSnapshot:(id)arg1 ;
-(void)_library:(id)arg0 didProduceError:(id)arg1 failedItemIdentifiers:(id)arg2 ;
-(void)_libraryDidCompleteSync:(id)arg0 ;
-(void)_libraryInfoWithCompletionHandler:(id)arg0 ;
-(void)_libraryWillBeginSync:(id)arg0 ;
-(void)_queryLibraryWithCompletionHandler:(id)arg0 ;
-(void)_queryLibraryWithParameters:(id)arg0 completionHandler:(id)arg1 ;
-(void)_synchronize;
-(void)_synchronizeSnapshot:(id)arg0 startCondition:(id)arg1 ;
-(void)_updateTracks:(id)arg0 completionHandler:(id)arg1 ;
-(void)addMediaItems:(id)arg0 completionHandler:(id)arg1 ;
-(void)synchronizeSnapshot:(id)arg0 startCondition:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif