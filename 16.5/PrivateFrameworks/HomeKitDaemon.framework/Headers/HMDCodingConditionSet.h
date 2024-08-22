// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCODINGCONDITIONSET_H
#define HMDCODINGCONDITIONSET_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "HMDManagedObjectCodingModel.h"

@interface HMDCodingConditionSet : NSObject <NSCopying>

 {
    HMDManagedObjectCodingModel *_model;
    NSUInteger _bitmask;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithModel:(id)arg0 ;
-(id)initWithModel:(id)arg0 conditions:(id)arg1 ;
-(void)addCondition:(id)arg0 ;
-(void)removeCondition:(id)arg0 ;


@end


#endif