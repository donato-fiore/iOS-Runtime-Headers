// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TISTATISTICKEY_H
#define TISTATISTICKEY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIStatisticKey : NSObject

@property (readonly, nonatomic) NSString *aggdName; // ivar: _aggdName
@property (readonly, nonatomic) NSString *counterName; // ivar: _counterName
@property (readonly, nonatomic) NSString *inputMode; // ivar: _inputMode


+(id)statisticKeyWithAggdName:(id)arg0 andCounterName:(id)arg1 andInputMode:(id)arg2 ;
-(id)initWithAggdName:(id)arg0 andCounterName:(id)arg1 andInputMode:(id)arg2 ;


@end


#endif