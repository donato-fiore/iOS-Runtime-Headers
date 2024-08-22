// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPMUTABLELARGEOBJECTARRAY_H
#define TSPMUTABLELARGEOBJECTARRAY_H



#import "TSPAbstractMutableLargeArray.h"

@interface TSPMutableLargeObjectArray : TSPAbstractMutableLargeArray



+(Class)arraySegmentClass;
-(void)addObjectsFromArray:(id)arg0 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif