// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRUNITTESTINGCLUSTERNESTEDSTRUCTLIST_H
#define MTRUNITTESTINGCLUSTERNESTEDSTRUCTLIST_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRUnitTestingClusterSimpleStruct.h"

@interface MTRUnitTestingClusterNestedStructList : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *a; // ivar: _a
@property (copy, nonatomic) NSNumber *b; // ivar: _b
@property (copy, nonatomic) MTRUnitTestingClusterSimpleStruct *c; // ivar: _c
@property (copy, nonatomic) NSArray *d; // ivar: _d
@property (copy, nonatomic) NSArray *e; // ivar: _e
@property (copy, nonatomic) NSArray *f; // ivar: _f
@property (copy, nonatomic) NSArray *g; // ivar: _g


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif