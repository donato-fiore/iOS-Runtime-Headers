// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSSEQUENTIALMEDIAITEMGROUPITERATOR_H
#define NMSSEQUENTIALMEDIAITEMGROUPITERATOR_H



#import "NMSMediaItemGroupIterator.h"

@interface NMSSequentialMediaItemGroupIterator : NMSMediaItemGroupIterator



-(NSUInteger)iteratingOrder;
-(void)_continueToNextContainer;
-(void)_continueToNextIdentifier;
-(void)markAllRemainingContainersAsSkipped;


@end


#endif