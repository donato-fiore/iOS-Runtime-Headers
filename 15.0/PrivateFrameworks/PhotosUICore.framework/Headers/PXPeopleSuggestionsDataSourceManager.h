// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPEOPLESUGGESTIONSDATASOURCEMANAGER_H
#define PXPEOPLESUGGESTIONSDATASOURCEMANAGER_H



#import "PXSectionedDataSourceManager.h"
#import "PXPeopleSuggestionsDataSource.h"
#import "PXPeopleSuggestionsMediaProvider.h"

@interface PXPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (readonly, nonatomic) PXPeopleSuggestionsDataSource *dataSource;
@property (readonly, copy, nonatomic) PXPeopleSuggestionsMediaProvider *mediaProvider;


-(BOOL)isLoading;
-(void)boostLoading;
-(void)cancelLoading;
-(void)startLoading;


@end


#endif