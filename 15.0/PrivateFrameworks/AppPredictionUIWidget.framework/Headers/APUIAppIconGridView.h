// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APUIAPPICONGRIDVIEW_H
#define APUIAPPICONGRIDVIEW_H

@class UIView, SBIconListView, UILabel, SBIconListModel, SBReusableViewMap, NSArray, NSString, _UILegibilitySettings;
@protocol SBIconViewProviding, SBIconViewDelegate, APUIAppIconDataSourceDelegate, SBIconListLayoutObserver, SBIconViewQuerying, APUIAppIconGridViewDelegate;


#import "APUIAppIconDataSource.h"
#import "APUIAppIconGridLayoutProvider.h"

@interface APUIAppIconGridView : UIView <SBIconViewProviding, SBIconViewDelegate, APUIAppIconDataSourceDelegate, SBIconListLayoutObserver, SBIconViewQuerying>

 {
    APUIAppIconDataSource *_dataSource;
    SBIconListView *_gridView;
    UILabel *_emptyStateLabel;
    SBIconListModel *_model;
    SBReusableViewMap *_reusableIconViewMap;
    APUIAppIconGridLayoutProvider *_layoutProvider;
}


@property (copy, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<APUIAppIconGridViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic, getter=isOccluded) BOOL occluded; // ivar: _occluded
@property (nonatomic) BOOL shouldDisplayEmptyState; // ivar: _shouldDisplayEmptyState
@property (readonly) Class superclass;


+(id)createDismissSuggestionApplicationShortcutItemWithType:(id)arg0 localizedName:(id)arg1 ;
-(BOOL)appIconDataSource:(id)arg0 launchAppFromIcon:(id)arg1 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewDisplaysBadges:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isDisplayingIcon:(id)arg0 inLocations:(id)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg0 ;
-(BOOL)isDisplayingIconView:(id)arg0 inLocation:(id)arg1 ;
-(BOOL)isIconViewRecycled:(id)arg0 ;
-(CGFloat)_iconLabelAlphaForMode:(NSUInteger)arg0 ;
-(id)_emptyStateLabel;
-(id)bundleIdAtLocation:(struct CGPoint )arg0 ;
-(id)dequeueReusableIconViewOfClass:(Class)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 ;
-(id)firstIconViewForIcon:(id)arg0 excludingLocations:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg0 inLocations:(id)arg1 ;
-(id)iconViewForIcon:(id)arg0 location:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addGridView;
-(void)_configureAliasingForIconView:(id)arg0 ;
-(void)_significantTimeChange:(id)arg0 ;
-(void)configureIconView:(id)arg0 forIcon:(id)arg1 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateDisplayedIconViewsUsingBlock:(id)arg0 ;
-(void)highlightIconForBundleId:(id)arg0 ;
-(void)iconListView:(id)arg0 didAddIconView:(id)arg1 ;
-(void)iconListView:(id)arg0 didRemoveIconView:(id)arg1 ;
-(void)iconListViewDidChangeBoundsSize:(id)arg0 ;
-(void)iconTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)recycleIconView:(id)arg0 ;


@end


#endif