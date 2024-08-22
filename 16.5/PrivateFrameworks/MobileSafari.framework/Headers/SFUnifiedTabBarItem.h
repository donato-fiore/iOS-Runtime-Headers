// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFUNIFIEDTABBARITEM_H
#define SFUNIFIEDTABBARITEM_H

@class NSUUID, NSString, UIImage, NSDate, NSArray;
@protocol SFNavigationBarItemObserver, SFTabHoverPreviewItem, SFMenuConfiguring;


#import "SFUnifiedBarItem.h"
#import "SFUnifiedTabBarItemView.h"
#import "SFNavigationBarItem.h"

@interface SFUnifiedTabBarItem : SFUnifiedBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
@property (retain, nonatomic) NSDate *lastReloadDate; // ivar: _lastReloadDate
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic) NSUInteger menuButtonBadges; // ivar: _menuButtonBadges
@property (weak, nonatomic) NSObject<SFMenuConfiguring> *menuButtonConfigurator; // ivar: _menuButtonConfigurator
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem; // ivar: _navigationBarItem
@property (copy, nonatomic) NSArray *shareParticipants; // ivar: _shareParticipants
@property (nonatomic) BOOL showsBadgeOnExtensionsButton; // ivar: _showsBadgeOnExtensionsButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic, getter=isUnread) BOOL unread; // ivar: _unread


-(id)init;
-(id)menuElementRepresentationWithSelectionHandler:(id)arg0 ;
-(void)_configureItemView:(id)arg0 isPreview:(BOOL)arg1 ;
-(void)_showReaderAvailabilityLabelIfNeeded;
-(void)_showTranslationAvailabilityLabelIfNeeded;
-(void)configureItemView:(id)arg0 isPreview:(BOOL)arg1 ;
-(void)dismissAvailabilityOverlays;
-(void)navigationBarItemDidUpdateExtensionButtonConfiguration:(id)arg0 ;
-(void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg0 ;
-(void)navigationBarItemDidUpdateSecurityAnnotation:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsLockIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsReaderButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsSearchIndicator:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsStopReloadButtons:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsTranslationIcon:(id)arg0 ;
-(void)navigationBarItemDidUpdateShowsVoiceSearchButton:(id)arg0 ;
-(void)navigationBarItemDidUpdateStopReloadButtonShowsStop:(id)arg0 ;
-(void)navigationBarItemDidUpdateText:(id)arg0 ;
-(void)setReusableView:(id)arg0 ;
-(void)toggleExtensionBadge;


@end


#endif