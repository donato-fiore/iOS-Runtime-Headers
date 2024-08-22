// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXIMPORTSECTIONHEADERLAYOUTPROVIDER_H
#define PXIMPORTSECTIONHEADERLAYOUTPROVIDER_H

@class PLDateRangeFormatter;


#import "PXActionableSectionHeaderLayoutProvider.h"

@interface PXImportSectionHeaderLayoutProvider : PXActionableSectionHeaderLayoutProvider

@property (readonly, nonatomic) PLDateRangeFormatter *dateRangeFormatter; // ivar: _dateRangeFormatter


-(id)initWithViewModel:(id)arg0 viewProvider:(id)arg1 ;
-(id)primaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)secondaryTextForDataSource:(id)arg0 sectionIndexPath:(struct PXSimpleIndexPath )arg1 ;


@end


#endif