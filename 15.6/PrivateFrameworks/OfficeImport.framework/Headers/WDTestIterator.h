// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDTESTITERATOR_H
#define WDTESTITERATOR_H



#import "WDIterator.h"

@interface WDTestIterator : WDIterator {
    WDIterator *mIterator;
    id *mNext;
}




-(BOOL)hasNext;
-(BOOL)test:(id)arg0 ;
-(id)initWithIterator:(id)arg0 ;
-(id)next;


@end


#endif