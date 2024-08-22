// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTSESSIONACCUMULATOR_H
#define _UITEXTINPUTSESSIONACCUMULATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UITextInputSessionAccumulator : NSObject {
    NSUInteger _values;
}


@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSUInteger depth; // ivar: _depth
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)accumulatorWithName:(id)arg0 type:(NSInteger)arg1 depth:(NSUInteger)arg2 block:(id)arg3 ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)increaseWithActions:(id)arg0 ;
-(void)reset;


@end


#endif