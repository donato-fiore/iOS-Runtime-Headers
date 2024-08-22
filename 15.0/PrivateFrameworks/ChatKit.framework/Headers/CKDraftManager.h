// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDRAFTMANAGER_H
#define CKDRAFTMANAGER_H

@class NSMutableDictionary, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface CKDraftManager : NSObject {
    NSMutableDictionary *_cachedDrafts;
    NSMutableSet *_dirtyDraftIDs;
    NSArray *_pendingRecipients;
}




+(id)sharedInstance;
-(id)_draftForKey:(id)arg0 ;
-(id)_pendingRecipients;
-(id)_pendingRecipientsURL;
-(id)draftForConversation:(id)arg0 ;
-(id)draftForPendingConversationWithRecipients:(*id)arg0 ;
-(void)_clearDraftForConversation:(id)arg0 ;
-(void)_setDraft:(id)arg0 forKey:(id)arg1 ;
-(void)_setPendingRecipients:(id)arg0 ;
-(void)clearDraftForPendingConversation;
-(void)dealloc;
-(void)flushCache;
-(void)save:(BOOL)arg0 ;
-(void)setDraft:(id)arg0 forConversation:(id)arg1 ;
-(void)setDraftForPendingConversation:(id)arg0 withRecipients:(id)arg1 ;


@end


#endif