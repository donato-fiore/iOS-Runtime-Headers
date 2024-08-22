// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYERVIEW_H
#define AVPLAYERVIEW_H

@class UIView;


#import "AVPresentationContainerView.h"

@interface AVPlayerView : AVPresentationContainerView

@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) BOOL needsInitialLayout; // ivar: _needsInitialLayout


-(id)initWithFrame:(struct CGRect )arg0 contentView:(id)arg1 ;
-(void)_beginManagingContentViewIfNeeded;
-(void)_stopManagingContentView;
-(void)layoutSubviews;


@end


#endif