// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICOLLECTIONTABLEHEADER_H
#define SEARCHUICOLLECTIONTABLEHEADER_H



#import "SearchUICollectionReusableView.h"
#import "SearchUITableHeaderView.h"

@interface SearchUICollectionTableHeader : SearchUICollectionReusableView

@property (readonly) SearchUITableHeaderView *tableHeaderView; // ivar: _tableHeaderView


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;


@end


#endif