// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDBJOURNAL_H
#define MFDBJOURNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MFMailboxUid.h"

@interface MFDbJournal : NSObject {
    NSString *_path;
    MFMailboxUid *_mailbox;
    _opaque_pthread_mutex_t _lock;
    int _fd;
}




+(NSInteger)mergeAllJournalsUsingConnection:(id)arg0 ;
+(id)_journalForMailbox:(id)arg0 ;
+(id)legacyJournal;
+(void)initialize;
-(BOOL)_markMailboxForReconciliation:(BOOL)arg0 connection:(id)arg1 ;
-(NSInteger)mergeUsingConnection:(id)arg0 ;
-(id)initWithMailbox:(id)arg0 ;
-(int)_processJournalFile:(id)arg0 connection:(id)arg1 ;
-(void)dealloc;


@end


#endif