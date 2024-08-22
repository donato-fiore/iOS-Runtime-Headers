// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUACTIVITYARTWORKVIEW_H
#define MRUACTIVITYARTWORKVIEW_H

@class NSString, UIImage, NSTimer, CCUICAPackageView;


#import "MRUArtworkView.h"

@interface MRUActivityArtworkView : MRUArtworkView

@property (retain, nonatomic) NSString *artworkIdentifier; // ivar: _artworkIdentifier
@property (nonatomic) BOOL currentItemHasChangedSinceArtworkLastSet; // ivar: _currentItemHasChangedSinceArtworkLastSet
@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (retain, nonatomic) NSString *currentStateName; // ivar: _currentStateName
@property (nonatomic, getter=isEmpty) BOOL empty; // ivar: _empty
@property (retain, nonatomic) UIImage *emptyImage; // ivar: _emptyImage
@property (retain, nonatomic) NSTimer *emptyTimer; // ivar: _emptyTimer
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning


-(CGFloat)artworkLoadingTimeout;
-(id)description;
-(id)init;
-(void)layoutSubviews;
-(void)setArtworkImage:(id)arg0 ;
-(void)setCurrentImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)transitionToImage:(id)arg0 ;
-(void)updatePackageState;


@end


#endif