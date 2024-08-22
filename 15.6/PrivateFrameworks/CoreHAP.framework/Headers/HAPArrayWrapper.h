// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPARRAYWRAPPER_H
#define HAPARRAYWRAPPER_H

@class NSArray;


#import "HAPFieldWrapper.h"

@interface HAPArrayWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSArray *field; // ivar: _field
@property (copy, nonatomic) id *objectCreator; // ivar: _objectCreator


+(id)wrappertlv:(NSUInteger)arg0 name:(id)arg1 objectCreator:(id)arg2 ;


@end


#endif