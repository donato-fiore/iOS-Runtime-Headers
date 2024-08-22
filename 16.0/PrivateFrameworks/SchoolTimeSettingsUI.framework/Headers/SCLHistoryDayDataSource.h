// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLHISTORYDAYDATASOURCE_H
#define SCLHISTORYDAYDATASOURCE_H

@class PSSpecifier;


#import "SCLSpecifierDataSource.h"

@interface SCLHistoryDayDataSource : SCLSpecifierDataSource

@property (retain, nonatomic) PSSpecifier *countSpecifier; // ivar: _countSpecifier
@property (retain, nonatomic) PSSpecifier *itemSpecifier; // ivar: _itemSpecifier


-(id)initWithListController:(id)arg0 viewModel:(id)arg1 historyGroup:(id)arg2 title:(id)arg3 ;


@end


#endif