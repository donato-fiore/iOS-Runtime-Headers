// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAIRDROPMAGICHEADVIEWCONTROLLER_H
#define SFAIRDROPMAGICHEADVIEWCONTROLLER_H

@class UIViewController, CMMotionManager, UILabel;
@protocol SFMagicHeadWheelViewDelegate, SFAirDropMagicHeadViewControllerDelegate;


#import "SFMagicHeadWheelView.h"

@interface SFAirDropMagicHeadViewController : UIViewController <SFMagicHeadWheelViewDelegate>



@property (nonatomic) NSInteger currentOrientation; // ivar: _currentOrientation
@property (weak) NSObject<SFAirDropMagicHeadViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat dotsRadius; // ivar: _dotsRadius
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGFloat initialAngleDegrees; // ivar: _initialAngleDegrees
@property (nonatomic, getter=isMagicHead) BOOL magicHead; // ivar: _magicHead
@property (retain, nonatomic) CMMotionManager *motionManager; // ivar: _motionManager
@property (nonatomic) BOOL motionUpdatesStarted; // ivar: _motionUpdatesStarted
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UILabel *nameLabel2; // ivar: _nameLabel2
@property (nonatomic) NSUInteger numberOfDots; // ivar: _numberOfDots
@property (retain, nonatomic) UILabel *secondLabel; // ivar: _secondLabel
@property (readonly, nonatomic) BOOL shouldBeHidden;
@property (nonatomic) BOOL viewVisible; // ivar: _viewVisible
@property (retain, nonatomic) SFMagicHeadWheelView *wheelView; // ivar: _wheelView


-(id)headForRealName:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)calculatePreferredSize;
-(void)dealloc;
-(void)handleDeviceMotion:(id)arg0 ;
-(void)magicHeadChangedFacingDegree:(CGFloat)arg0 ;
-(void)magicHeadChangedSelectionToNode:(id)arg0 ;
-(void)magicHeadDidFinishTransferForNode:(id)arg0 ;
-(void)magicHeadDidStartTransferForNode:(id)arg0 ;
-(void)magicHeadDidTerminateTransferForNode:(id)arg0 ;
-(void)magicHeadSelectedHeadRequestingDisabledState:(BOOL)arg0 ;
-(void)magicHeadSelectedHeadRequestingSubtitleTextChangeForState:(NSInteger)arg0 ;
-(void)magicHeadSelectedNodeTapped:(id)arg0 ;
-(void)resetTransferStateWithRealName:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)subscribedProgress:(id)arg0 forPersonWithRealName:(id)arg1 ;
-(void)transferCancelledToPerson:(id)arg0 ;
-(void)update;
-(void)updateLabels;
-(void)updateNodes:(id)arg0 withPersonToProgress:(id)arg1 ;
-(void)userSelectedWithRealName:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif