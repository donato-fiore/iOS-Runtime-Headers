// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMOVIEPLAYERPROXYVIEW_H
#define _MPMOVIEPLAYERPROXYVIEW_H

@class UIView;


#import "MPMoviePlayerController.h"

@interface _MPMoviePlayerProxyView : UIView

@property (readonly, weak, nonatomic) MPMoviePlayerController *controller; // ivar: _controller


-(id)initWithMoviePlayerController:(id)arg0 ;
-(void)_updateContainmentInWindow:(id)arg0 superview:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif