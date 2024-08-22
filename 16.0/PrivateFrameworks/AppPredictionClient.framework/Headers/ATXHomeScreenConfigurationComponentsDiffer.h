// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHOMESCREENCONFIGURATIONCOMPONENTSDIFFER_H
#define ATXHOMESCREENCONFIGURATIONCOMPONENTSDIFFER_H

@class NSOrderedCollectionDifference, NSArray;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenConfigurationComponentsDiffer : NSObject {
    NSOrderedCollectionDifference *_pinnedWidgetsDifference;
    NSOrderedCollectionDifference *_stacksDifference;
    NSOrderedCollectionDifference *_appsDifference;
}


@property (readonly, nonatomic) NSArray *addedApps;
@property (readonly, nonatomic) NSArray *addedPinnedWidgets;
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *deletedPinnedWidgets;
@property (readonly, nonatomic) NSArray *deletedPreviousSuggestedWidgets; // ivar: _deletedPreviousSuggestedWidgets
@property (readonly, nonatomic) NSArray *deletedStacks;
@property (readonly, nonatomic) NSArray *removedApps;
@property (readonly, nonatomic) NSArray *userAddedPreviousSuggestedWidgets; // ivar: _userAddedPreviousSuggestedWidgets
@property (readonly, nonatomic) NSArray *userAddedStackedWidgets; // ivar: _userAddedStackedWidgets
@property (readonly, nonatomic) NSArray *userDeletedStackedWidgets; // ivar: _userDeletedStackedWidgets


-(id)_widgetsByWidgetUniqueIds:(id)arg0 ;
-(id)initWithPreviousComponents:(id)arg0 currentComponents:(id)arg1 ;


@end


#endif