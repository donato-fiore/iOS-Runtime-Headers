// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPSTRINGWRAPPER_H
#define HAPSTRINGWRAPPER_H

@class NSString;


#import "HAPFieldWrapper.h"

@interface HAPStringWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSString *field; // ivar: _field


+(id)wrappertlv:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif