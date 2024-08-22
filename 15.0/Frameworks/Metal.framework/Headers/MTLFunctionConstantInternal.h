// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLFUNCTIONCONSTANTINTERNAL_H
#define MTLFUNCTIONCONSTANTINTERNAL_H

@class NSString;


#import "MTLFunctionConstant.h"

@interface MTLFunctionConstantInternal : MTLFunctionConstant {
    NSString *_name;
    NSUInteger _type;
    NSUInteger _index;
    BOOL _required;
}




-(BOOL)required;
-(NSUInteger)index;
-(NSUInteger)type;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 index:(NSUInteger)arg2 required:(BOOL)arg3 ;
-(id)name;
-(void)dealloc;


@end


#endif