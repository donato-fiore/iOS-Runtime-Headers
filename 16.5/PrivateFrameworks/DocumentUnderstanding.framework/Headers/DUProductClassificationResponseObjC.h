// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUPRODUCTCLASSIFICATIONRESPONSEOBJC_H
#define DUPRODUCTCLASSIFICATIONRESPONSEOBJC_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding31DUProductClassificationResponse.h"
#import "DUDebugInfoObjC.h"

@interface DUProductClassificationResponseObjC : NSObject {
    _TtC21DocumentUnderstanding31DUProductClassificationResponse *_underlying;
}


@property (copy, nonatomic) NSArray *productCategories;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;


-(id)init;


@end


#endif