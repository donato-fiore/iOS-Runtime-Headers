// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDANONYMOUSSHARINGMANAGER_H
#define CKDANONYMOUSSHARINGMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDContainer.h"
#import "CKDZonePCSData.h"

@interface CKDAnonymousSharingManager : NSObject

@property (weak, nonatomic) CKDContainer *container; // ivar: _container
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue; // ivar: _synchronizeQueue
@property (retain, nonatomic) CKDZonePCSData *zonePCSData; // ivar: _zonePCSData


-(id)_generateHashIdentifierForAnonymousShareTuple:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(id)pcsCache;
-(id)pcsManager;
-(void)_lockedFetchSystemZonePCSDataWithCompletion:(id)arg0 ;
-(void)_locked_decryptShareTuple:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_locked_encryptShareTuples:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)addAnonymousSharesToSharedDB:(id)arg0 operation:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)decryptShareTuple:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encryptShareTuples:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)removeAnonymousSharesfromSharedDB:(id)arg0 operation:(id)arg1 withCompletionBlock:(id)arg2 ;


@end


#endif