// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXCLIPPLAYERVIEWCONTROLLER_H
#define CFXCLIPPLAYERVIEWCONTROLLER_H

@class UIViewController<JFXAVPlayerViewer>, UIView;


#import "JFXCompositionPlayerViewController.h"
#import "CFXClip.h"
#import "CFXClipCompositionDataSource.h"

@interface CFXClipPlayerViewController : JFXCompositionPlayerViewController

@property (weak, nonatomic) UIViewController<JFXAVPlayerViewer> *avPlayerView; // ivar: _avPlayerView
@property (retain, nonatomic) CFXClip *clip; // ivar: _clip
@property (retain, nonatomic) CFXClipCompositionDataSource *clipDataSource; // ivar: _clipDataSource
@property (retain, nonatomic) UIView *placeholderContainerView; // ivar: _placeholderContainerView
@property (retain, nonatomic) UIView *playerContainerView; // ivar: _playerContainerView


-(id)playerViewer;
-(void)displayCompositionUpdateLoadingView:(id)arg0 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)reloadClip;
-(void)reloadClipAndSeekToStart:(BOOL)arg0 ;
-(void)updateCompositionForEffectChange;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif