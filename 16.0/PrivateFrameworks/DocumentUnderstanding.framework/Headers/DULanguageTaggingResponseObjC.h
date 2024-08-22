// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DULANGUAGETAGGINGRESPONSEOBJC_H
#define DULANGUAGETAGGINGRESPONSEOBJC_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding25DULanguageTaggingResponse.h"
#import "DUDebugInfoObjC.h"

@interface DULanguageTaggingResponseObjC : NSObject {
    _TtC21DocumentUnderstanding25DULanguageTaggingResponse *_underlying;
}


@property (copy, nonatomic) NSArray *languageTags;
@property (copy, nonatomic) DUDebugInfoObjC *responseDebugInfo;


-(id)init;


@end


#endif