// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUSESSIONARTWORKVIEW_H
#define MRUSESSIONARTWORKVIEW_H

@class NSString, CCUICAPackageView;


#import "MRUArtworkView.h"

@interface MRUSessionArtworkView : MRUArtworkView

@property (nonatomic) NSUInteger currentState; // ivar: _currentState
@property (retain, nonatomic) NSString *currentStateName; // ivar: _currentStateName
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (nonatomic, getter=isLoading) BOOL loading; // ivar: _loading
@property (nonatomic) BOOL needsTransition; // ivar: _needsTransition
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (retain, nonatomic) CCUICAPackageView *packageView; // ivar: _packageView
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (nonatomic, getter=isTransitioning) BOOL transitioning; // ivar: _transitioning


-(id)description;
-(id)init;
-(void)layoutSubviews;
-(void)setArtworkImage:(id)arg0 ;
-(void)setCatalog:(id)arg0 ;
-(void)setCurrentImage:(id)arg0 animated:(BOOL)arg1 ;
-(void)transitionToImage:(id)arg0 ;
-(void)updatePackageState;


@end


#endif