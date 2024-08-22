// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENCONFIGURATIONDIFFER_H
#define ATXHOMESCREENCONFIGURATIONDIFFER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ATXHomeScreenConfigurationComponents.h"
#import "ATXHomeScreenConfigurationComponentsDiffer.h"

@interface ATXHomeScreenConfigurationDiffer : NSObject {
    ATXHomeScreenConfigurationComponents *_previousComponents;
    ATXHomeScreenConfigurationComponents *_currentComponents;
    ATXHomeScreenConfigurationComponentsDiffer *_componentsDiffer;
    NSArray *_configuredPinnedWidgets;
    NSArray *_configuredStackedWidgets;
}


@property (readonly, nonatomic) NSArray *addedApps;
@property (readonly, nonatomic) NSArray *addedPinnedWidgets; // ivar: _addedPinnedWidgets
@property (readonly, nonatomic) NSArray *addedStacks;
@property (readonly, nonatomic) NSArray *configuredWidgets;
@property (readonly, nonatomic) NSArray *deletedPinnedWidgets; // ivar: _deletedPinnedWidgets
@property (readonly, nonatomic) NSArray *deletedStacks;
@property (readonly, nonatomic) NSArray *removedApps;
@property (readonly, nonatomic) NSArray *suggestedWidgetsAddedPermanentlyByUser;
@property (readonly, nonatomic) NSArray *suggestedWidgetsRemoved;
@property (readonly, nonatomic) NSArray *widgetsAddedToStacksByUser; // ivar: _widgetsAddedToStacksByUser
@property (readonly, nonatomic) NSArray *widgetsDeletedFromStacksByUser; // ivar: _widgetsDeletedFromStacksByUser


+(BOOL)_widget:(id)arg0 hasSamePersonalityAsOtherWidget:(id)arg1 ;
-(BOOL)currentConfigContainsWidgetWithBundleId:(id)arg0 kind:(id)arg1 size:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithPreviousConfigurations:(id)arg0 currentConfigurations:(id)arg1 ;
-(id)stackInCurrentConfigurationsForStackedWidget:(id)arg0 ;
-(id)stackInPreviousConfigurationsForStackedWidget:(id)arg0 ;
-(void)_calculatePinnedWidgetChanges;
-(void)_calculateStackedWidgetChanges;


@end


#endif