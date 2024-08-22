// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERELEVANCECONDITION_H
#define RERELEVANCECONDITION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RERelevanceCondition : NSObject <NSCopying>

 {
    id *_condition;
}




+(id)conditionWithBlock:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(float)_evaluateRelevanceWithEnvironment:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCondtionBlock:(id)arg0 ;


@end


#endif