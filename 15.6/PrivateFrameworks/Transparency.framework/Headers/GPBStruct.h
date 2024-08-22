// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBSTRUCT_H
#define GPBSTRUCT_H

@class NSMutableDictionary;


#import "GPBMessage.h"

@interface GPBStruct : GPBMessage

@property (retain, nonatomic) NSMutableDictionary *fields;
@property (readonly, nonatomic) NSUInteger fields_Count;


+(id)descriptor;


@end


#endif