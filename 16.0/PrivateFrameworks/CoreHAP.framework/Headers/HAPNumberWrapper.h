// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPNUMBERWRAPPER_H
#define HAPNUMBERWRAPPER_H

@class NSNumber;


#import "HAPFieldWrapper.h"

@interface HAPNumberWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSNumber *field; // ivar: _field


+(id)wrappertlv:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif