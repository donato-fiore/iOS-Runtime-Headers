// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDATABASETRANSACTIONCONTEXTSTATISTICS_H
#define HDDATABASETRANSACTIONCONTEXTSTATISTICS_H

@class NSMutableArray, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HDDatabaseTransactionContextStatistics : NSObject {
    NSMutableArray *_transactions;
}


@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, nonatomic) CGFloat totalDuration;
@property (readonly, copy, nonatomic) NSArray *transactions;


-(id)init;
-(void)_addTransactionStatistics:(id)arg0 ;


@end


#endif