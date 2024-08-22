// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFIMAPOPERATIONCACHE_H
#define MFIMAPOPERATIONCACHE_H

@class NSFileHandle, NSMutableArray, NSString;
@protocol MFIMAPConnectionDelegate;

#import <Foundation/Foundation.h>

#import "IMAPAccount.h"

@interface MFIMAPOperationCache : NSObject <MFIMAPConnectionDelegate>

 {
    IMAPAccount *_account;
    NSFileHandle *_handle;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
    BOOL _opsPending;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)setShouldFlattenCacheOperations:(BOOL)arg0 ;
-(BOOL)connection:(id)arg0 shouldHandleUntaggedResponse:(id)arg1 forCommand:(id)arg2 ;
-(BOOL)hasOperationsForMailbox:(id)arg0 ;
-(BOOL)hasPendingOfflineOperations;
-(id)account;
-(id)deferredOperations;
-(id)initWithIMAPAccount:(id)arg0 ;
-(unsigned int)firstUidForCopyingMessages:(id)arg0 fromMailbox:(id)arg1 toMailbox:(id)arg2 ;
-(unsigned int)uidForAppendingMessageData:(id)arg0 withFlags:(id)arg1 andInternalDate:(id)arg2 toMailbox:(id)arg3 ;
-(void)_performAppendOperation:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)_performCopyOperation:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)_performCreateOperation:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)_performDeleteOperation:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)_performStoreOperation:(id)arg0 withContext:(struct ? *)arg1 ;
-(void)_queueDeferredOperation:(id)arg0 ;
-(void)createMailbox:(id)arg0 ;
-(void)dealloc;
-(void)deleteMailbox:(id)arg0 ;
-(void)expungeTemporaryUid:(unsigned int)arg0 ;
-(void)performDeferredOperationsWithConnection:(id)arg0 ;
-(void)saveChanges;
-(void)setFlags:(id)arg0 andClearFlags:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlags:(id)arg0 andClearFlags:(id)arg1 forUIDs:(id)arg2 forMailbox:(id)arg3 ;


@end


#endif