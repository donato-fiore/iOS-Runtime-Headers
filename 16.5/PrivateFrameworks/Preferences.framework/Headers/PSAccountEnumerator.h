// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSACCOUNTENUMERATOR_H
#define PSACCOUNTENUMERATOR_H

@class ACMonitoredAccountStore, NSString;
@protocol ACMonitoredAccountStoreDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSAccountEnumerator : NSObject <ACMonitoredAccountStoreDelegateProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_accountUpdateQueue; // ivar: __accountUpdateQueue
@property (retain, nonatomic) ACMonitoredAccountStore *_monitoredAccountStore; // ivar: __monitoredAccountStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger visibleAccountCount; // ivar: _visibleAccountCount


+(id)_visibleAccountTypeIDs;
+(id)sharedEnumerator;
-(id)init;
-(void)_handleAccountStoreDidUpdateIsInitialLoad:(BOOL)arg0 completion:(id)arg1 ;
-(void)_reloadAccountStoreStateIsInitialLoad:(BOOL)arg0 completion:(id)arg1 ;
-(void)accountWasAdded:(id)arg0 ;
-(void)accountWasModified:(id)arg0 ;
-(void)accountWasRemoved:(id)arg0 ;
-(void)dealloc;


@end


#endif