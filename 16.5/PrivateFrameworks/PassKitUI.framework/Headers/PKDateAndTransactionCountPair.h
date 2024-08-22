// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATEANDTRANSACTIONCOUNTPAIR_H
#define PKDATEANDTRANSACTIONCOUNTPAIR_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PKDateAndTransactionCountPair : NSObject

@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) NSUInteger transactionCount; // ivar: _transactionCount


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif