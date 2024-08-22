// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISHADOWVIEW_H
#define _UISHADOWVIEW_H



#import "UIImageView.h"

@interface _UIShadowView : UIImageView

@property (nonatomic) BOOL useLowerIntensity; // ivar: _useLowerIntensity


-(void)_updateShadowVisualStyling;
-(void)didMoveToSuperview;


@end


#endif