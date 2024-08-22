// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPDATAWRAPPER_H
#define HAPDATAWRAPPER_H

@class NSData;


#import "HAPFieldWrapper.h"

@interface HAPDataWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSData *field; // ivar: _field


+(id)wrappertlv:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif