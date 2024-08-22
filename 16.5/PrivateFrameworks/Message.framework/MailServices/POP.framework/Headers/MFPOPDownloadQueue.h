// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFPOPDOWNLOADQUEUE_H
#define MFPOPDOWNLOADQUEUE_H

@class MFBufferedQueue, MFSqliteMessageIDStore, MFMailMessageLibrary, MFMailboxUid, NSDate;



@interface MFPOPDownloadQueue : MFBufferedQueue {
    MFSqliteMessageIDStore *_uidStore;
    MFMailMessageLibrary *_library;
    MFMailboxUid *_mailbox;
    NSDate *startDate;
}




-(BOOL)addItem:(id)arg0 ;
-(BOOL)handleItems:(id)arg0 ;
-(NSUInteger)sizeForItem:(id)arg0 ;
-(id)init;


@end


#endif