// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCONSTRAINTVALIDATOR_H
#define NSCONSTRAINTVALIDATOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_PFModelMap.h"

@interface NSConstraintValidator : NSObject {
    _PFModelMap *_modelMap;
    NSArray *_entities;
    *id _cachesByEntity;
}




-(void)dealloc;


@end


#endif