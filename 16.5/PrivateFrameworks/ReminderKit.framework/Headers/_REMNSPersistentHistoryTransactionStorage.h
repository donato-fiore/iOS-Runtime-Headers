// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _REMNSPERSISTENTHISTORYTRANSACTIONSTORAGE_H
#define _REMNSPERSISTENTHISTORYTRANSACTIONSTORAGE_H

@class NSString, NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMNSPersistentHistoryToken.h"

@interface _REMNSPersistentHistoryTransactionStorage : NSObject <NSSecureCoding>



@property (copy, nonatomic) REMObjectID *accountID; // ivar: _accountID
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (copy, nonatomic) NSArray *changes; // ivar: _changes
@property (copy, nonatomic) NSString *contextName; // ivar: _contextName
@property (copy, nonatomic) NSString *processID; // ivar: _processID
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) REMNSPersistentHistoryToken *token; // ivar: _token
@property (nonatomic) NSInteger transactionNumber; // ivar: _transactionNumber


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif