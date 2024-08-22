// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUSTRUCTUREDENTITYRESPONSEOBJC_H
#define DUSTRUCTUREDENTITYRESPONSEOBJC_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding26DUStructuredEntityResponse.h"
#import "DUDebugInfoObjC.h"

@interface DUStructuredEntityResponseObjC : NSObject {
    _TtC21DocumentUnderstanding26DUStructuredEntityResponse *_underlying;
}


@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;
@property (copy, nonatomic) NSArray *structuredEntities;


-(id)init;


@end


#endif