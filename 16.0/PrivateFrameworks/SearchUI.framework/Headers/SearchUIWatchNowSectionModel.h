// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIWATCHNOWSECTIONMODEL_H
#define SEARCHUIWATCHNOWSECTIONMODEL_H

@class NSString, SFWatchListItem;


#import "SearchUIHorizontallyScrollingSectionModel.h"

@interface SearchUIWatchNowSectionModel : SearchUIHorizontallyScrollingSectionModel

@property (retain) NSString *cardSectionId; // ivar: _cardSectionId
@property (retain) SFWatchListItem *watchListItem; // ivar: _watchListItem


-(id)horizontalRowModelsForCardSections:(id)arg0 result:(id)arg1 queryId:(NSUInteger)arg2 ;
-(id)initWithWatchNowCardSection:(id)arg0 result:(id)arg1 queryId:(NSUInteger)arg2 section:(id)arg3 ;
-(void)loadIfNecessaryWithCompletionHandler:(id)arg0 ;


@end


#endif