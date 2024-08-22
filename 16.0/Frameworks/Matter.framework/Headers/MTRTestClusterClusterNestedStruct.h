// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRTESTCLUSTERCLUSTERNESTEDSTRUCT_H
#define MTRTESTCLUSTERCLUSTERNESTEDSTRUCT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "MTRTestClusterClusterSimpleStruct.h"

@interface MTRTestClusterClusterNestedStruct : NSObject

@property (retain, nonatomic) NSNumber *a; // ivar: _a
@property (retain, nonatomic) NSNumber *b; // ivar: _b
@property (retain, nonatomic) MTRTestClusterClusterSimpleStruct *c; // ivar: _c


-(id)init;


@end


#endif