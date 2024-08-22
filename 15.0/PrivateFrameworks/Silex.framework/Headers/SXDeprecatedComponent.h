// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXDEPRECATEDCOMPONENT_H
#define SXDEPRECATEDCOMPONENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SXComponentClassification.h"

@interface SXDeprecatedComponent : NSObject {
    NSString *_typeString;
    SXComponentClassification *_replacementClassification;
}




-(id)initWithType:(id)arg0 withReplacementClassification:(Class)arg1 ;


@end


#endif