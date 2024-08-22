// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPUUIDWRAPPER_H
#define HAPUUIDWRAPPER_H

@class NSUUID;


#import "HAPFieldWrapper.h"

@interface HAPUUIDWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSUUID *field; // ivar: _field


+(id)wrappertlv:(NSUInteger)arg0 name:(id)arg1 ;


@end


#endif