// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTKITTEXTCHECKINGRESULT_H
#define CKTEXTKITTEXTCHECKINGRESULT_H

@class NSTextCheckingResult;


#import "CKTextKitEntityAttribute.h"

@interface CKTextKitTextCheckingResult : NSTextCheckingResult {
    _NSRange _rangeOverride;
    NSUInteger _resultTypeOverride;
}


@property (readonly, nonatomic) CKTextKitEntityAttribute *entityAttribute; // ivar: _entityAttribute


-(NSUInteger)resultType;
-(id)initWithType:(NSUInteger)arg0 entityAttribute:(id)arg1 range:(struct _NSRange )arg2 ;
-(struct _NSRange )range;


@end


#endif