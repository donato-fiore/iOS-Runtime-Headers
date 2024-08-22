// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFFETCHRESPONSEQUEUE_H
#define MFFETCHRESPONSEQUEUE_H

@class MFBufferedQueue;


#import "MFLibraryIMAPStore.h"
#import "MFIMAPConnection.h"

@interface MFFetchResponseQueue : MFBufferedQueue {
    MFLibraryIMAPStore *_store;
    MFIMAPConnection *_connection;
    NSUInteger _numNewUIDs;
    NSUInteger _newMessageCount;
    NSUInteger _highestModSequence;
    NSUInteger _flags;
    BOOL _isSearching;
}




-(BOOL)addItem:(id)arg0 ;
-(BOOL)handleItems:(id)arg0 ;
-(BOOL)shouldAddUID:(NSUInteger)arg0 ;
-(id)init;
-(id)insertMessages:(id)arg0 ;
-(id)messageToSyncFlagsForUID:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif