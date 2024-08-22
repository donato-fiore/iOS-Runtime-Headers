// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCADSTATUSCONDITION_H
#define FCADSTATUSCONDITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCAdStatusCondition : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger type; // ivar: _type


+(id)adStatusConditionsFromConditionsArray:(id)arg0 ;
-(id)initWithStatusConditionType:(NSUInteger)arg0 identifier:(id)arg1 ;


@end


#endif