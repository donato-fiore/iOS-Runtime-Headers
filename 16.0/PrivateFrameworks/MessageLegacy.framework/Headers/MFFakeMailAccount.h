// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFFAKEMAILACCOUNT_H
#define MFFAKEMAILACCOUNT_H

@class NSURL, MFIMAPConnection, NSRecursiveLock;


#import "MailAccount.h"
#import "DeliveryAccount.h"

@interface MFFakeMailAccount : MailAccount {
    NSURL *_URL;
    MFIMAPConnection *_cachedConnection;
    NSRecursiveLock *_flagChangesLock;
}


@property (retain, nonatomic) DeliveryAccount *deliveryAccount; // ivar: _deliveryAccount
@property (nonatomic, getter=isManaged) BOOL managed; // ivar: _managed


-(BOOL)_shouldConfigureMailboxCache;
-(BOOL)isActive;
-(BOOL)shouldFetchAgainWithError:(id)arg0 foregroundRequest:(BOOL)arg1 ;
-(BOOL)supportsFastRemoteBodySearch;
-(BOOL)supportsRemoteAppend;
-(BOOL)willPerformActionForChokePoint:(id)arg0 coalescePoint:(id)arg1 result:(*id)arg2 ;
-(id)URLString;
-(id)_URLScheme;
-(id)_mailboxPathPrefix;
-(id)_nameForMailboxUid:(id)arg0 ;
-(id)connectionForStore:(id)arg0 delegate:(id)arg1 options:(int)arg2 ;
-(id)debugDescription;
-(id)description;
-(id)displayName;
-(id)flagChangesForMailboxPath:(id)arg0 UID:(unsigned int)arg1 connectTime:(CGFloat)arg2 ;
-(id)flagChangesLock;
-(id)hostname;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 rootMailboxUid:(id)arg1 ;
-(id)powerAssertionIdentifierWithPrefix:(id)arg0 ;
-(id)uniqueId;
-(id)username;
-(int)cachePolicy;
-(unsigned int)minID;
-(void)didFinishActionForChokePoint:(id)arg0 coalescePoint:(id)arg1 withResult:(id)arg2 ;
-(void)setCachedConnection:(id)arg0 ;
-(void)setUnreadCount:(unsigned int)arg0 forMailbox:(id)arg1 ;


@end


#endif