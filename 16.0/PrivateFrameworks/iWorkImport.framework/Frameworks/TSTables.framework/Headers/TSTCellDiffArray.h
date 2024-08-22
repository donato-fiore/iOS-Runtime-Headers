// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLDIFFARRAY_H
#define TSTCELLDIFFARRAY_H

@class TSPAbstractMutableLargeArray;



@interface TSTCellDiffArray : TSPAbstractMutableLargeArray



+(Class)arraySegmentClass;
-(id)packageLocatorForSegments;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif