// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDCOMBINEDITERATOR_H
#define WDCOMBINEDITERATOR_H



#import "WDIterator.h"

@interface WDCombinedIterator : WDIterator {
    WDIterator *mParentIterator;
}


@property (retain, nonatomic) WDIterator *childIterator; // ivar: mChildIterator


-(BOOL)hasNext;
-(id)childIteratorFrom:(id)arg0 ;
-(id)initWithParentIterator:(id)arg0 ;
-(id)newChildIteratorFrom:(id)arg0 ;
-(id)next;
-(void)incrementChildIterator;


@end


#endif