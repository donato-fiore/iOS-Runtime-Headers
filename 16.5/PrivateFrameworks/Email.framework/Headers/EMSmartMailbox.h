// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMSMARTMAILBOX_H
#define EMSMARTMAILBOX_H



#import "EMMailbox.h"
#import "EMMailboxScope.h"

@interface EMSmartMailbox : EMMailbox {
    id *_predicateGenerator;
}


@property (readonly, nonatomic) EMMailboxScope *mailboxScope; // ivar: _mailboxScope
@property (readonly, nonatomic) NSInteger smartMailboxType; // ivar: _smartMailboxType


+(id)blueMailboxWithMailboxScope:(id)arg0 ;
+(id)flaggedMailboxWithMailboxScope:(id)arg0 ;
+(id)followUpMailboxWithMailboxScope:(id)arg0 ;
+(id)grayMailboxWithMailboxScope:(id)arg0 ;
+(id)greenMailboxWithMailboxScope:(id)arg0 ;
+(id)hasAttachmentsMailboxWithMailboxScope:(id)arg0 ;
+(id)includesMeMailboxWithMailboxScope:(id)arg0 ;
+(id)muteThreadsMailboxWithMailboxScope:(id)arg0 ;
+(id)notifyThreadsMailboxWithMailboxScope:(id)arg0 ;
+(id)orangeMailboxWithMailboxScope:(id)arg0 ;
+(id)purpleMailboxWithMailboxScope:(id)arg0 ;
+(id)readLaterMailboxWithMailboxScope:(id)arg0 ;
+(id)redMailboxWithMailboxScope:(id)arg0 ;
+(id)sendLaterMailboxWithMailboxScope:(id)arg0 ;
+(id)todayMailboxWithMailboxScope:(id)arg0 ;
+(id)unifiedMailboxOfType:(NSInteger)arg0 name:(id)arg1 ;
+(id)unifiedMailboxOfType:(NSInteger)arg0 name:(id)arg1 additionalPredicate:(id)arg2 ;
+(id)unreadMailboxWithMailboxScope:(id)arg0 ;
+(id)unsubscribeMailboxWithMailboxScope:(id)arg0 ;
+(id)vipMailboxWithMailboxScope:(id)arg0 ;
+(id)vipMailboxWithName:(id)arg0 additionalPredicate:(id)arg1 ;
+(id)yellowMailboxWithMailboxScope:(id)arg0 ;
-(BOOL)_shouldArchiveByDefault;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSendLaterMailbox;
-(BOOL)isSmartMailbox;
-(BOOL)supportsSelectAll;
-(NSUInteger)hash;
-(id)ef_publicDescription;
-(id)initWithType:(NSInteger)arg0 mailboxType:(NSInteger)arg1 name:(id)arg2 mailboxScope:(id)arg3 predicateGenerator:(id)arg4 ;
-(id)makePredicate;


@end


#endif