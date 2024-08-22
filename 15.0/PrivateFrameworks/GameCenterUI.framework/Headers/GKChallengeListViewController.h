// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKCHALLENGELISTVIEWCONTROLLER_H
#define GKCHALLENGELISTVIEWCONTROLLER_H



#import "GKDashboardCollectionViewController.h"

@interface GKChallengeListViewController : GKDashboardCollectionViewController

@property (nonatomic) BOOL shouldShowPlayForChallenge; // ivar: _shouldShowPlayForChallenge
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(id)initWithGameRecord:(id)arg0 ;
-(void)configureCloseButton;
-(void)configureCollectionView;
-(void)donePressed:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)setupVisualEffect;
-(void)showNoContentPlaceholderForError:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif