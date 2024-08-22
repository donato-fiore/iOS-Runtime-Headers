// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSKEYVALUEMETHODSETTER_H
#define NSKEYVALUEMETHODSETTER_H



#import "NSKeyValueSetter.h"

@interface NSKeyValueMethodSetter : NSKeyValueSetter {
    *objc_method _method;
}




-(id)initWithContainerClassID:(id)arg0 key:(id)arg1 method:(struct objc_method *)arg2 ;
-(struct objc_method *)method;


@end


#endif