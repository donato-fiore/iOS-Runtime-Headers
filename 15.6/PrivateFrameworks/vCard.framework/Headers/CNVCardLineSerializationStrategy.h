// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDLINESERIALIZATIONSTRATEGY_H
#define CNVCARDLINESERIALIZATIONSTRATEGY_H


#import <Foundation/Foundation.h>


@interface CNVCardLineSerializationStrategy : NSObject



+(id)version21StrategyWithDataStorage:(id)arg0 encodings:(id)arg1 ;
+(id)version21StrategyWithStringStorage:(id)arg0 encodings:(id)arg1 ;
+(id)version30StrategyWithDataStorage:(id)arg0 ;
+(id)version30StrategyWithStringStorage:(id)arg0 ;


@end


#endif