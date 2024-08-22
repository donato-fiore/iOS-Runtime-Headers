// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCOMPETITIONSCOREVIEWCONFIGURATION_H
#define ASCOMPETITIONSCOREVIEWCONFIGURATION_H

@class UIFont;

#import <Foundation/Foundation.h>


@interface ASCompetitionScoreViewConfiguration : NSObject

@property (nonatomic) NSInteger achievementThumbnailAlignment; // ivar: _achievementThumbnailAlignment
@property (nonatomic) NSInteger achievementThumbnailQuality; // ivar: _achievementThumbnailQuality
@property (nonatomic) CGSize achievementThumbnailSize; // ivar: _achievementThumbnailSize
@property (nonatomic) CGFloat achievementThumbnailTopMargin; // ivar: _achievementThumbnailTopMargin
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (nonatomic) CGFloat bottomMargin; // ivar: _bottomMargin
@property (nonatomic) NSInteger division; // ivar: _division
@property (nonatomic) CGFloat headerBaselineOffset; // ivar: _headerBaselineOffset
@property (retain, nonatomic) UIFont *headerFont; // ivar: _headerFont
@property (nonatomic) CGFloat minimumMiddleMargin; // ivar: _minimumMiddleMargin
@property (nonatomic) CGFloat nameBaselineOffset; // ivar: _nameBaselineOffset
@property (retain, nonatomic) UIFont *nameFont; // ivar: _nameFont
@property (nonatomic) CGFloat opponentScoreViewWidth; // ivar: _opponentScoreViewWidth
@property (nonatomic) CGFloat primaryScoreBaselineOffset; // ivar: _primaryScoreBaselineOffset
@property (retain, nonatomic) UIFont *primaryScoreFont; // ivar: _primaryScoreFont
@property (nonatomic) NSInteger primaryScoreSource; // ivar: _primaryScoreSource
@property (retain, nonatomic) UIFont *primaryScoreUnitFont; // ivar: _primaryScoreUnitFont
@property (nonatomic) CGFloat secondaryScoreBaselineOffset; // ivar: _secondaryScoreBaselineOffset
@property (retain, nonatomic) UIFont *secondaryScoreFont; // ivar: _secondaryScoreFont
@property (nonatomic) BOOL showsAchievementThumbnail; // ivar: _showsAchievementThumbnail
@property (nonatomic) BOOL showsNames; // ivar: _showsNames
@property (nonatomic) BOOL showsPrimaryScoreUnits; // ivar: _showsPrimaryScoreUnits
@property (nonatomic) BOOL showsScoreTypeHeader; // ivar: _showsScoreTypeHeader
@property (nonatomic) BOOL showsTodaySecondaryScore; // ivar: _showsTodaySecondaryScore
@property (nonatomic) CGFloat sideMargin; // ivar: _sideMargin
@property (nonatomic) BOOL uppercaseNames; // ivar: _uppercaseNames
@property (nonatomic) BOOL wantsScaledBaselineAlignment; // ivar: _wantsScaledBaselineAlignment
@property (nonatomic) BOOL zeroPadPrimaryScore; // ivar: _zeroPadPrimaryScore


+(id)companionFriendListConfiguration;
+(id)companionTotalScoreFriendDetailConfiguration;
+(id)companionTotalWinsFriendDetailConfiguration;
+(id)companionTotalWinsStandaloneFriendDetailConfiguration;
+(id)gizmoTodayScoreConfiguration;
+(id)gizmoTotalScoreConfiguration;
+(id)gizmoTotalScoreFriendDetailConfiguration;
+(id)gizmoTotalWinsConfiguration;
+(id)gizmoTotalWinsStandaloneConfiguration;


@end


#endif