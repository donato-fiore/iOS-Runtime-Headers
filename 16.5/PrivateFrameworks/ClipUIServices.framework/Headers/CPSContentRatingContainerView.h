// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSCONTENTRATINGCONTAINERVIEW_H
#define CPSCONTENTRATINGCONTAINERVIEW_H

@class UIView, UIVisualEffectView;


#import "CPSScaledImageView.h"

@interface CPSContentRatingContainerView : UIView {
    CPSScaledImageView *_contentRatingImageView;
    UIVisualEffectView *_visualEffectView;
}




-(id)init;
-(void)setImage:(id)arg0 usesVibrantAppearance:(BOOL)arg1 ;


@end


#endif