// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPMUTABLELARGENUMBERARRAY_H
#define TSPMUTABLELARGENUMBERARRAY_H



#import "TSPAbstractMutableLargeArray.h"

@interface TSPMutableLargeNumberArray : TSPAbstractMutableLargeArray



+(Class)arraySegmentClass;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif