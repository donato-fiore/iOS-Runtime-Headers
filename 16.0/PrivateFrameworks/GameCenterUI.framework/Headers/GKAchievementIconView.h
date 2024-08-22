// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKACHIEVEMENTICONVIEW_H
#define GKACHIEVEMENTICONVIEW_H

@class UIImageView, GKAchievement;



@interface GKAchievementIconView : UIImageView

@property (retain, nonatomic) GKAchievement *achievement; // ivar: _achievement
@property (nonatomic) BOOL isDetail; // ivar: _isDetail
@property (retain, nonatomic) GKAchievement *localAchievement; // ivar: _localAchievement


+(id)progressSource;
+(id)progressSourceDetail;
-(CGFloat)progressForAchievement:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)processProgressImage:(id)arg0 forAchievement:(id)arg1 ;
-(id)progressIdentifierForAchievement:(id)arg0 ;
-(void)configureImage;
-(void)invalidateIntrinsicContentSize;
-(void)loadAndProcessAchievementProgressImageForAchievement:(id)arg0 withHandler:(id)arg1 ;
-(void)setupForAchievement:(id)arg0 localAchievement:(id)arg1 ;


@end


#endif