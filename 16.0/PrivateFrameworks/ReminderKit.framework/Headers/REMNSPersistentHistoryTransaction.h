// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMNSPERSISTENTHISTORYTRANSACTION_H
#define REMNSPERSISTENTHISTORYTRANSACTION_H



#import "REMChangeTransaction.h"
#import "_REMNSPersistentHistoryTransactionStorage.h"

@interface REMNSPersistentHistoryTransaction : REMChangeTransaction

@property (retain) _REMNSPersistentHistoryTransactionStorage *storage; // ivar: _storage


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)accountID;
-(id)author;
-(id)changes;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(id)storeID;
-(id)timestamp;
-(id)token;
-(void)_resolveAccountID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif