// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADHISTORYDISTRIBUTIONENUMERATOR_H
#define ADHISTORYDISTRIBUTIONENUMERATOR_H


#import <Foundation/Foundation.h>


@interface ADHistoryDistributionEnumerator : NSObject {
    *void _iterator;
}




-(BOOL)getNextValue:(*CGFloat)arg0 secondsInDayOffset:(*int)arg1 ;
-(id)initWithIterator:(*void)arg0 ;


@end


#endif