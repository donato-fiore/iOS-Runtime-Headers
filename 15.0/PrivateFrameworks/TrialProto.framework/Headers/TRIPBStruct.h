// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBSTRUCT_H
#define TRIPBSTRUCT_H

@class NSMutableDictionary;


#import "TRIPBMessage.h"

@interface TRIPBStruct : TRIPBMessage

@property (retain, nonatomic) NSMutableDictionary *fields;
@property (readonly, nonatomic) NSUInteger fields_Count;


+(id)descriptor;


@end


#endif