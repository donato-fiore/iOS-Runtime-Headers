// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDASHBOARDCONTEXT_H
#define HUDASHBOARDCONTEXT_H

@class HFAccessoryTypeGroup, NSString, HMHome, HMRoom;

#import <Foundation/Foundation.h>


@interface HUDashboardContext : NSObject {
    ? overrideDashboardTitle;
    ? type;
}


@property (nonatomic) NSInteger accessoryGroupingStyle; // ivar: accessoryGroupingStyle
@property (nonatomic) NSUInteger accessoryLikeItemObjectLevel; // ivar: accessoryLikeItemObjectLevel
@property (nonatomic, readonly) HFAccessoryTypeGroup *accessoryTypeGroup;
@property (nonatomic) BOOL allowsAdding; // ivar: allowsAdding
@property (nonatomic) BOOL allowsAnnounce; // ivar: allowsAnnounce
@property (nonatomic) BOOL allowsEditing; // ivar: allowsEditing
@property (nonatomic) BOOL allowsHomeNavigation; // ivar: allowsHomeNavigation
@property (nonatomic) NSInteger backgroundStyle; // ivar: backgroundStyle
@property (nonatomic) NSInteger cameraPresentationStyle; // ivar: cameraPresentationStyle
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) NSInteger filterPresentationStyle; // ivar: filterPresentationStyle
@property (nonatomic, readonly) HMHome *home; // ivar: home
@property (nonatomic) BOOL includePredictedScenes; // ivar: includePredictedScenes
@property (nonatomic, readonly) NSString *menuEditActionTitle;
@property (nonatomic, readonly) NSString *menuEditActionTitleLocalizationKey;
@property (nonatomic, copy) NSString *overrideDashboardTitle;
@property (nonatomic, readonly) HMRoom *room; // ivar: room
@property (nonatomic) NSInteger scenePresentationStyle; // ivar: scenePresentationStyle
@property (nonatomic) BOOL shouldDelayItemUpdatesForViewVisibility; // ivar: shouldDelayItemUpdatesForViewVisibility
@property (nonatomic) BOOL shouldHideEmptySections; // ivar: shouldHideEmptySections
@property (nonatomic) BOOL shouldHidePlaceholderService; // ivar: shouldHidePlaceholderService
@property (nonatomic) BOOL shouldIncludeRoomInAccessoryNames; // ivar: shouldIncludeRoomInAccessoryNames
@property (nonatomic, readonly) NSString *typeDescriptionForAnalytics;


+(id)camerasDashboardWithTitle:(id)arg0 forHome:(id)arg1 ;
+(id)categoryDashboardForAccessoryTypeGroup:(id)arg0 home:(id)arg1 room:(id)arg2 ;
+(id)homeDashboardForHome:(id)arg0 ;
+(id)roomDashboardForRoom:(id)arg0 ;
+(id)scenesDashboardWithTitle:(id)arg0 forHome:(id)arg1 ;
+(id)speakersAndTVsDashboardWithTitle:(id)arg0 forHome:(id)arg1 ;
-(BOOL)accessoryRepresentableHasStandardTileRepresentation:(id)arg0 ;
-(BOOL)canPresentDetailsViewControllerForSectionWithIdentifier:(id)arg0 ;
-(BOOL)canShowHeaderForSectionWithIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldCreateModule:(Class)arg0 ;
-(BOOL)shouldHideAccessoryRepresentable:(id)arg0 ;
-(BOOL)shouldHideHomeKitObject:(id)arg0 ;
-(BOOL)shouldHideInRoomSectionForAccessoryRepresentableItem:(id)arg0 ;
-(BOOL)shouldHideSectionWithIdentifier:(id)arg0 ;
-(BOOL)shouldHideStatusItemClass:(Class)arg0 ;
-(NSInteger)maximumNumberOfItemsInSectionWithIdentifier:(id)arg0 ;
-(id)init;


@end


#endif