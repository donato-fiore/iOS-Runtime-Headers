// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKUITHEME_H
#define GKUITHEME_H

@class UIImage, NSCache;

#import <Foundation/Foundation.h>

#import "GKNetworkImageSource.h"

@interface GKUITheme : NSObject

@property (readonly, nonatomic) CGSize authenticateExtensionFormSheetSize;
@property (readonly, nonatomic) CGFloat formSheetCornerRadius;
@property (readonly, nonatomic) CGSize formSheetSize;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardListSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *iconLeaderboardSetListSource;
@property (readonly, retain, nonatomic) UIImage *interactiveRatingStarsBackground;
@property (readonly, retain, nonatomic) UIImage *interactiveRatingStarsForeground;
@property (readonly, retain, nonatomic) GKNetworkImageSource *macGameIconSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoDetailSource;
@property (readonly, retain, nonatomic) GKNetworkImageSource *photoListSource;
@property (readonly, retain, nonatomic) UIImage *ratingStarsBackgroundImage;
@property (readonly, retain, nonatomic) UIImage *ratingStarsForegroundImage;
@property (retain, nonatomic) NSCache *resourceCache; // ivar: _resourceCache
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageDetailSource;
@property (readonly, nonatomic) GKNetworkImageSource *untreatedAchievementImageSource;


+(id)sharedTheme;
-(id)achievementsDefaultIcon;
-(id)achievementsNotStartedIcon;
-(id)avatarSourceWithDimension:(NSInteger)arg0 ;
-(id)defaultLeaderboardIcon;
-(id)defaultPlayerPhoto;
-(id)eventIconImage;
-(id)imageNamed:(id)arg0 ;
-(id)init;
-(id)messagesInviteBackgroundImage;
-(id)monogramSourceWithDimension:(NSInteger)arg0 ;
-(id)navbarActionButtonIcon;
-(id)placeholderSourceWithDimension:(NSInteger)arg0 ;
-(id)playerPickerSelectedImage;
-(id)playerPickerUnselectedImage;
-(id)removePlayerButtonImage;
-(id)resourceForSelector:(SEL)arg0 missingHandler:(id)arg1 ;
-(id)resourceWithName:(id)arg0 missingHandler:(id)arg1 ;
-(id)statusDotImage;
-(void)clearResourceCache;


@end


#endif