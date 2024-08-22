// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLIVEICONIMAGEVIEW_H
#define SBLIVEICONIMAGEVIEW_H



#import "SBIconImageView.h"

@interface SBLiveIconImageView : SBIconImageView



-(BOOL)isAnimationAllowed;
-(id)snapshot;
-(void)prepareForReuse;
-(void)setIcon:(id)arg0 location:(id)arg1 animated:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)updateAnimatingState;
-(void)updateImageAnimated:(BOOL)arg0 ;
-(void)updateUnanimated;


@end


#endif