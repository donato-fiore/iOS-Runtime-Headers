// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSVXPCTRANSACTION_H
#define MSVXPCTRANSACTION_H

@class NSUUID, NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface MSVXPCTransaction : NSObject {
    NSUUID *_identifier;
    NSObject<OS_os_transaction> *_transaction;
    NSInteger _transactionCount;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(id)activeTransactions;
-(id)description;
-(id)initWithName:(id)arg0 ;
-(void)beginTransaction;
-(void)endTransaction;
-(void)endTransactionOnDate:(id)arg0 ;


@end


#endif