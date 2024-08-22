// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUCATEGORYCLASSIFICATIONRESPONSEOBJC_H
#define DUCATEGORYCLASSIFICATIONRESPONSEOBJC_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding32DUCategoryClassificationResponse.h"
#import "DUDebugInfoObjC.h"

@interface DUCategoryClassificationResponseObjC : NSObject {
    _TtC21DocumentUnderstanding32DUCategoryClassificationResponse *_underlying;
}


@property (copy, nonatomic) NSArray *categories;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;


-(id)init;


@end


#endif