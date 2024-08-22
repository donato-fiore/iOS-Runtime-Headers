// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUNIFIEDTABBARITEM_H
#define SFUNIFIEDTABBARITEM_H

@class NSUUID, NSString, UIImage, NSDate;
@protocol SFNavigationBarItemObserver, SFTabHoverPreviewItem;


#import "SFUnifiedBarItem.h"
#import "SFWebExtensionButtonConfiguration.h"
#import "SFUnifiedTabBarItemView.h"
#import "SFNavigationBarItem.h"
#import "_SFFluidProgressView.h"

@interface SFUnifiedTabBarItem : SFUnifiedBarItem <SFNavigationBarItemObserver, SFTabHoverPreviewItem>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (retain, nonatomic) SFWebExtensionButtonConfiguration *extensionButtonConfiguration; // ivar: _extensionButtonConfiguration
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (readonly, nonatomic) SFUnifiedTabBarItemView *itemView;
@property (retain, nonatomic) NSDate *lastReloadDate; // ivar: _lastReloadDate
@property (nonatomic) NSUInteger mediaStateIcon; // ivar: _mediaStateIcon
@property (nonatomic) NSUInteger menuButtonBadges; // ivar: _menuButtonBadges
@property (retain, nonatomic) SFNavigationBarItem *navigationBarItem; // ivar: _navigationBarItem
@property (retain, nonatomic) _SFFluidProgressView *progressView; // ivar: _progressView
@property (nonatomic) BOOL showsBadgeOnExtensionsButton; // ivar: _showsBadgeOnExtensionsButton
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)init;
-(void)configureItemView:(id)arg0 ;
-(void)dismissAvailabilityOverlays;
-(void)navigationBarItemDidUpdateFormatButtonSelected:(id)arg0 ;
-(void)navigationBarItemDidUpdateProgressView:(id)arg0 ;
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