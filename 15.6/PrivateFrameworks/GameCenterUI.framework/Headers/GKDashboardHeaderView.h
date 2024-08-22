// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDHEADERVIEW_H
#define GKDASHBOARDHEADERVIEW_H

@class UICollectionReusableView, GKGameRecord, UISegmentedControl;



@interface GKDashboardHeaderView : UICollectionReusableView

@property (nonatomic) BOOL didSetupLikeButton; // ivar: _didSetupLikeButton
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl


+(CGFloat)defaultHeight;
-(void)awakeFromNib;


@end


#endif