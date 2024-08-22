// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSCLOUDKITKEYELECTIONSTORE_H
#define IDSCLOUDKITKEYELECTIONSTORE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IDSCKDatabase.h"

@interface IDSCloudKitKeyElectionStore : NSObject

@property (retain, nonatomic) IDSCKDatabase *database; // ivar: _database
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)isItemNotFoundError:(id)arg0 ;
-(id)_itemFromRecord:(id)arg0 error:(*id)arg1 ;
-(id)_recordFromItem:(id)arg0 ;
-(id)_recordID;
-(id)initWithDatabase:(id)arg0 queue:(id)arg1 ;
-(void)fetchAccountIdentityItemWithCompletion:(id)arg0 ;
-(void)removeAccountIdentityItemWithCompletion:(id)arg0 ;
-(void)storeAccountIdentityItem:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif