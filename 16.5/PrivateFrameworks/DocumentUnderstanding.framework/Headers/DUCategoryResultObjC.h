// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUCATEGORYRESULTOBJC_H
#define DUCATEGORYRESULTOBJC_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding16DUCategoryResult.h"

@interface DUCategoryResultObjC : NSObject {
    _TtC21DocumentUnderstanding16DUCategoryResult *_underlying;
}


@property (nonatomic) CGFloat categoryConfidence;
@property (copy, nonatomic) NSString *categoryIdentifier;


-(id)init;


@end


#endif