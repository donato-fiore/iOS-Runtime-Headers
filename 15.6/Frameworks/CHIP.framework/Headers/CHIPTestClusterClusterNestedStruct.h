// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTCLUSTERCLUSTERNESTEDSTRUCT_H
#define CHIPTESTCLUSTERCLUSTERNESTEDSTRUCT_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "CHIPTestClusterClusterSimpleStruct.h"

@interface CHIPTestClusterClusterNestedStruct : NSObject

@property (retain, nonatomic) NSNumber *a; // ivar: _a
@property (retain, nonatomic) NSNumber *b; // ivar: _b
@property (retain, nonatomic) CHIPTestClusterClusterSimpleStruct *c; // ivar: _c


-(id)init;


@end


#endif