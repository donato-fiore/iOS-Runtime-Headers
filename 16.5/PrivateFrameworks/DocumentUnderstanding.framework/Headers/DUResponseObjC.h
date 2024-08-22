// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DURESPONSEOBJC_H
#define DURESPONSEOBJC_H


#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding10DUResponse.h"
#import "DUCategoryClassificationResponseObjC.h"
#import "DULanguageTaggingResponseObjC.h"
#import "DUProductClassificationResponseObjC.h"
#import "DUDebugInfoObjC.h"
#import "DUStructuredEntityResponseObjC.h"
#import "DUTopicDetectionResponseObjC.h"

@interface DUResponseObjC : NSObject {
    _TtC21DocumentUnderstanding10DUResponse *_underlying;
}


@property (copy, nonatomic) DUCategoryClassificationResponseObjC *documentCategories;
@property (copy, nonatomic) DULanguageTaggingResponseObjC *languageTags;
@property (copy, nonatomic) DUProductClassificationResponseObjC *productCategories;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;
@property (copy, nonatomic) DUStructuredEntityResponseObjC *structuredEntities;
@property (copy, nonatomic) DUTopicDetectionResponseObjC *topics;


-(id)init;


@end


#endif