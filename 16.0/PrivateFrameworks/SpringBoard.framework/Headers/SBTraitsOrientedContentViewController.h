// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBTRAITSORIENTEDCONTENTVIEWCONTROLLER_H
#define SBTRAITSORIENTEDCONTENTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, SBFTraitsParticipant;


#import "SBTraitsOrientedContentViewControllerView.h"

@interface SBTraitsOrientedContentViewController : SBFTouchPassThroughViewController

@property (copy, nonatomic) id *actuateAlongsideBlock; // ivar: _actuateAlongsideBlock
@property (weak, nonatomic) SBFTraitsParticipant *containerParticipant; // ivar: _containerParticipant
@property (weak, nonatomic) SBFTraitsParticipant *contentParticipant; // ivar: _contentParticipant
@property (retain, nonatomic) SBTraitsOrientedContentViewControllerView *view;


-(BOOL)_canShowWhileLocked;
-(void)loadView;
-(void)updateOrientationIfNeeded;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif