// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTMETRICSDATAPREDICATE_H
#define MTMETRICSDATAPREDICATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface MTMetricsDataPredicate : NSObject

@property (retain, nonatomic) NSDictionary *fieldPredicates; // ivar: _fieldPredicates


+(id)predicateWithConfigData:(id)arg0 ;
+(id)predicateWithType:(id)arg0 argument:(id)arg1 ;
-(BOOL)evaluateWithMetricsData:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithFormat:(id)arg0 ;


@end


#endif