// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITITLESORTDESCRIPTOR_H
#define VUITITLESORTDESCRIPTOR_H

@class NSSortDescriptor;



@interface VUITitleSortDescriptor : NSSortDescriptor



+(id)ascendingTitleSortComparatorWithKey:(SEL)arg0 ;
+(id)descendingTitleSortComparatorWithKey:(SEL)arg0 ;
-(NSInteger)compareObject:(id)arg0 toObject:(id)arg1 ;


@end


#endif