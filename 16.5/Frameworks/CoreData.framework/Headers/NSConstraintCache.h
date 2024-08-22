// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONSTRAINTCACHE_H
#define NSCONSTRAINTCACHE_H

@class NSArray, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSEntityDescription.h"

@interface NSConstraintCache : NSObject {
    NSArray *_constraint;
    NSArray *_extension;
    NSEntityDescription *_entity;
    NSMutableDictionary *_knownValues;
    NSMutableArray *_children;
}




-(id)description;
-(void)dealloc;


@end


#endif