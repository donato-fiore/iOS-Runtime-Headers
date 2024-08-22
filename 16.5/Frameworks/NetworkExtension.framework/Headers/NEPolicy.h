// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPOLICY_H
#define NEPOLICY_H

@class NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEPolicyResult.h"

@interface NEPolicy : NSObject <NEPrettyDescription>

 {
    unsigned int _order;
    NEPolicyResult *_result;
    NSArray *_conditions;
}




-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithOrder:(unsigned int)arg0 result:(id)arg1 conditions:(id)arg2 ;


@end


#endif