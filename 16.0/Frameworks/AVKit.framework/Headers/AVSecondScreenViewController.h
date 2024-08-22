// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSECONDSCREENVIEWCONTROLLER_H
#define AVSECONDSCREENVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel, AVPlayerLayer;


#import "AVSecondScreenPlayerLayerView.h"

@interface AVSecondScreenViewController : UIViewController

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UILabel *debugLabel; // ivar: _debugLabel
@property (nonatomic) CGRect initialScreenBoundsHint; // ivar: _initialScreenBoundsHint
@property (retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView; // ivar: _playerLayerView
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // ivar: _playingOnSecondScreen
@property (weak, nonatomic) AVPlayerLayer *sourcePlayerLayer; // ivar: _sourcePlayerLayer
@property (readonly, nonatomic) CGSize videoDisplaySize;


-(id)debugText;
-(void)_updateContentViewIfNeeded;
-(void)_updateLayout;
-(void)dealloc;
-(void)loadPlayerLayerViewIfNeeded;
-(void)loadView;
-(void)setDebugText:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif