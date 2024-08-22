// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTINPUTSESSIONMETAACCUMULATOR_H
#define _UITEXTINPUTSESSIONMETAACCUMULATOR_H

@class UITextInputSessionAccumulator, NSArray;



@interface _UITextInputSessionMetaAccumulator : UITextInputSessionAccumulator {
    NSArray *_accumulators;
    NSInteger _lastSuccessfulIndex;
    NSUInteger _actionCountWithoutIncrease;
}




+(id)accumulatorWithName:(id)arg0 accumulators:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)increaseWithActions:(id)arg0 ;
-(void)reset;


@end


#endif