// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNOSTRANSACTIONINHIBITOR_H
#define _CNOSTRANSACTIONINHIBITOR_H

@class NSString;
@protocol OS_os_transaction;


#import "CNInhibitor.h"

@interface _CNOSTransactionInhibitor : CNInhibitor

@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)initWithLabel:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif