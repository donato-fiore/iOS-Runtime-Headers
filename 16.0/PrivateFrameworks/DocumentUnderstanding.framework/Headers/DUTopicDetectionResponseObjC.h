// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DUTOPICDETECTIONRESPONSEOBJC_H
#define DUTOPICDETECTIONRESPONSEOBJC_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding24DUTopicDetectionResponse.h"
#import "DUDebugInfoObjC.h"

@interface DUTopicDetectionResponseObjC : NSObject {
    _TtC21DocumentUnderstanding24DUTopicDetectionResponse *_underlying;
}


@property (copy, nonatomic) NSArray *globalTopics;
@property (copy, nonatomic) NSArray *personalTopics;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;


-(id)init;


@end


#endif