// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASRANKINGSTRATEGYTYPE_H
#define ICASRANKINGSTRATEGYTYPE_H

@protocol AADataType;

#import <Foundation/Foundation.h>


@interface ICASRankingStrategyType : NSObject <AADataType>



@property (readonly, nonatomic) NSInteger rankingStrategyType; // ivar: _rankingStrategyType


-(id)initWithRankingStrategyType:(NSInteger)arg0 ;
-(id)toJsonValueAndReturnError:(*id)arg0 ;


@end


#endif