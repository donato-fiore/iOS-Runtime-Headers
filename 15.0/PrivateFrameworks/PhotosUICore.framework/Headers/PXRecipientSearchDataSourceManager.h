// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXRECIPIENTSEARCHDATASOURCEMANAGER_H
#define PXRECIPIENTSEARCHDATASOURCEMANAGER_H

@class NSString;


#import "PXSectionedDataSourceManager.h"
#import "PXRecipientSearchDataSource.h"

@interface PXRecipientSearchDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXRecipientSearchDataSource *dataSource;
@property (copy, nonatomic) NSString *queryString; // ivar: _queryString
@property (nonatomic) NSUInteger searchState; // ivar: _searchState




@end


#endif