// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCCOMPANIONSYNCSESSION_H
#define VCCOMPANIONSYNCSESSION_H

@class NSString, SYSession, NSSet;
@protocol SYSessionDelegate, VCCompanionSyncSessionDelegate, OS_dispatch_queue, VCShortcutSyncService, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface VCCompanionSyncSession : NSObject <SYSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VCCompanionSyncSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSObject<VCShortcutSyncService> *service; // ivar: _service
@property (readonly, nonatomic) SYSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSSet *syncDataHandlers; // ivar: _syncDataHandlers
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


+(NSInteger)direction;
-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(id)initWithSYSession:(id)arg0 service:(id)arg1 syncDataHandlers:(id)arg2 ;
// -(unsigned int)syncSession:(id)arg0 enqueueChanges:(id)arg1 error:(unk)arg2  ;
-(void)resetDataStoreForSyncSession:(id)arg0 completion:(id)arg1 ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;
-(void)syncSession:(id)arg0 didEndWithError:(id)arg1 ;


@end


#endif