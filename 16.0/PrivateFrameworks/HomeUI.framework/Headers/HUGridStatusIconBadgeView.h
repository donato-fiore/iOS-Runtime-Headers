// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUGRIDSTATUSICONBADGEVIEW_H
#define HUGRIDSTATUSICONBADGEVIEW_H

@class UIImage, UIImageView;


#import "HUGridStatusBadgeView.h"

@interface HUGridStatusIconBadgeView : HUGridStatusBadgeView

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView; // ivar: _imageView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateConstraints;


@end


#endif