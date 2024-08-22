// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDTRANSACTION_H
#define WDTRANSACTION_H

@class NSString;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>


@interface WDTransaction : NSObject

@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction
@property (readonly, nonatomic) NSString *transactionDescription; // ivar: _transactionDescription


+(id)log;
-(id)initWithDescription:(id)arg0 ;
-(void)dealloc;


@end


#endif