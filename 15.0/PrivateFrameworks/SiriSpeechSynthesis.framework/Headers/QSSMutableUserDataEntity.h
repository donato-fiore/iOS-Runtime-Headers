// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEUSERDATAENTITY_H
#define QSSMUTABLEUSERDATAENTITY_H

@class NSArray;


#import "QSSUserDataEntity.h"

@interface QSSMutableUserDataEntity : QSSUserDataEntity

@property (copy, nonatomic) NSArray *attributes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif