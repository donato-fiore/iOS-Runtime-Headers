// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXSLOTRESOLUTIONPARAMETERS_H
#define ATXSLOTRESOLUTIONPARAMETERS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ATXAction.h"
#import "ATXSlotSet.h"

@interface ATXSlotResolutionParameters : NSObject <NSCopying>

 {
    ATXAction *_action;
    ATXSlotSet *_slots;
    NSArray *_values;
    NSUInteger _hash;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAction:(id)arg0 slots:(id)arg1 ;


@end


#endif