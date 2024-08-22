// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDLEADERBOARDSCOREHEADERVIEW_H
#define GKDASHBOARDLEADERBOARDSCOREHEADERVIEW_H

@class UICollectionReusableView, NSString, UILabel;


#import "GKTimeScopeButton.h"

@interface GKDashboardLeaderboardScoreHeaderView : UICollectionReusableView

@property (nonatomic) NSInteger timeScope;
@property (nonatomic) SEL timeScopeAction; // ivar: _timeScopeAction
@property (nonatomic) GKTimeScopeButton *timeScopeButton; // ivar: _timeScopeButton
@property (nonatomic) id *timeScopeTarget; // ivar: _timeScopeTarget
@property (copy, nonatomic) NSString *title;
@property (nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)defaultHeight;
-(void)awakeFromNib;
-(void)timeScopePressed:(id)arg0 ;


@end


#endif