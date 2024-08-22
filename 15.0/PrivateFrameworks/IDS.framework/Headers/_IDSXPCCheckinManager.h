// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSXPCCHECKINMANAGER_H
#define _IDSXPCCHECKINMANAGER_H

@class NSMutableDictionary;
@protocol IDSXPCAdapter;

#import <Foundation/Foundation.h>


@interface _IDSXPCCheckinManager : NSObject

@property (retain, nonatomic) NSObject<IDSXPCAdapter> *XPCAdapter; // ivar: _XPCAdapter
@property (nonatomic) os_unfair_lock_s checkinLock; // ivar: _checkinLock
@property (retain, nonatomic) NSMutableDictionary *connectionInfoByServiceIdentifier; // ivar: _connectionInfoByServiceIdentifier


+(id)sharedInstance;
-(id)init;
-(id)initWithXPCAdapter:(id)arg0 ;
-(void)_performLockedAccess:(id)arg0 ;
-(void)_temporarilyStoreMessage:(id)arg0 forServiceIdentifier:(id)arg1 ;
-(void)noteCreatedService:(id)arg0 ;
-(void)noteFinishedTransactionForService:(id)arg0 ;
-(void)teardownAll;
-(void)teardownService:(id)arg0 ;


@end


#endif