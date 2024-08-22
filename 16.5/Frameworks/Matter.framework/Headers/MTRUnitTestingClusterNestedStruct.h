// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERNESTEDSTRUCT_H
#define MTRUNITTESTINGCLUSTERNESTEDSTRUCT_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterNestedStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *a; // ivar: _a
@property (copy, nonatomic) NSNumber *b; // ivar: _b
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c; // ivar: _c


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif