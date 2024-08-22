// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HFCHARACTERISTICREADANDWRITETRANSACTIONS_H
#define _HFCHARACTERISTICREADANDWRITETRANSACTIONS_H

@class NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface _HFCharacteristicReadAndWriteTransactions : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *transactionsReading; // ivar: _transactionsReading
@property (retain, nonatomic) NSMutableOrderedSet *transactionsWriting; // ivar: _transactionsWriting


-(id)init;


@end


#endif