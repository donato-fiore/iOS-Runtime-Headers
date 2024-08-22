// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JEMETRICSDATAPREDICATE_H
#define JEMETRICSDATAPREDICATE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface JEMetricsDataPredicate : NSObject {
    NSDictionary *_fieldPredicates;
}




+(id)predicateWithConfiguration:(id)arg0 ;
+(id)predicateWithType:(id)arg0 argument:(id)arg1 ;
-(BOOL)evaluateWithMetricsData:(id)arg0 ;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithFormat:(id)arg0 ;


@end


#endif