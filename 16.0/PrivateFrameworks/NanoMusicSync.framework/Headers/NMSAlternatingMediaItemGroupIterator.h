// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSALTERNATINGMEDIAITEMGROUPITERATOR_H
#define NMSALTERNATINGMEDIAITEMGROUPITERATOR_H



#import "NMSMediaItemGroupIterator.h"

@interface NMSAlternatingMediaItemGroupIterator : NMSMediaItemGroupIterator {
    NSUInteger _maxItemListSize;
}




-(NSUInteger)iteratingOrder;
-(void)_continueToNextContainer;
-(void)_continueToNextIdentifier;
-(void)_generateItemListAndSizesDictIfNecessary;
-(void)_resetMaxItemListSize;
-(void)markAllRemainingContainersAsSkipped;
-(void)resetToIterateOverQuotaIdentifiers;


@end


#endif