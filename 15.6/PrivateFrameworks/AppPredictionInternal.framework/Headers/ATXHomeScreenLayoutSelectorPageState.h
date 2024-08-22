// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXHOMESCREENLAYOUTSELECTORPAGESTATE_H
#define ATXHOMESCREENLAYOUTSELECTORPAGESTATE_H

@class ATXHomeScreenPage, NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLayoutSelectorPageState : NSObject

@property (nonatomic) BOOL alreadySelectedASGWidgetForTopOfStack; // ivar: _alreadySelectedASGWidgetForTopOfStack
@property (retain, nonatomic) ATXHomeScreenPage *pageConfig; // ivar: _pageConfig
@property (retain, nonatomic) NSMutableArray *suggestionsAlreadyAssignedToPageToDedupeAgainst; // ivar: _suggestionsAlreadyAssignedToPageToDedupeAgainst
@property (retain, nonatomic) NSMutableArray *suggestionsToExcludeFromAppPredictionPanel; // ivar: _suggestionsToExcludeFromAppPredictionPanel
@property (retain, nonatomic) NSMutableArray *unfilledSGWidgets; // ivar: _unfilledSGWidgets




@end


#endif