// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFBASESYNCRESPONSEQUEUE_H
#define MFBASESYNCRESPONSEQUEUE_H

@class MFBufferedQueue, NSString, NSMutableArray, NSArray;


#import "MFLibraryIMAPStore.h"
#import "MFIMAPConnection.h"

@interface MFBaseSyncResponseQueue : MFBufferedQueue {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSString *_url;
    NSUInteger _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_libraryDetails;
    BOOL _shouldCompact;
    BOOL _shouldFetch;
    BOOL _isSearching;
}




-(BOOL)handleItems:(id)arg0 ;
-(BOOL)shouldSyncFlags;
-(NSUInteger)flagsForItem:(id)arg0 ;
-(NSUInteger)uidForItem:(id)arg0 ;
-(id)init;
-(id)sequenceIdentifierForItem:(id)arg0 ;
-(void)dealloc;


@end


#endif