// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UITEXTINPUTSESSIONEFFICACYACCUMULATOR_H
#define _UITEXTINPUTSESSIONEFFICACYACCUMULATOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UITextInputSessionEfficacyAccumulator : NSObject {
    NSInteger _lengths;
    NSInteger _actions;
}


@property (readonly, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (readonly, nonatomic) id *lengthBlock; // ivar: _lengthBlock
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


// +(id)accumulatorWithName:(id)arg0 lengthBlock:(id)arg1 actionBlock:(unk)arg2  ;
-(void)enumerateAnalytics:(id)arg0 ;
-(void)increaseWithAction:(id)arg0 ;
-(void)reset;


@end


#endif