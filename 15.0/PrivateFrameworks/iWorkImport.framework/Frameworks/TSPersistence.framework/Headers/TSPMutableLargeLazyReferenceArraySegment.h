// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPMUTABLELARGELAZYREFERENCEARRAYSEGMENT_H
#define TSPMUTABLELARGELAZYREFERENCEARRAYSEGMENT_H



#import "TSPAbstractMutableLargeArraySegment.h"

@interface TSPMutableLargeLazyReferenceArraySegment : TSPAbstractMutableLargeArraySegment



-(Class)elementClass;
-(NSUInteger)estimatedByteSizeOfElement:(id)arg0 ;
-(id)referredObjectAtIndex:(NSUInteger)arg0 ;
-(void)addReferredObject:(id)arg0 ;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif