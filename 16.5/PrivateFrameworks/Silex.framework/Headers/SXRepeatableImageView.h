// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXREPEATABLEIMAGEVIEW_H
#define SXREPEATABLEIMAGEVIEW_H

@class UIImage;


#import "SXImageView.h"

@interface SXRepeatableImageView : SXImageView

@property (retain, nonatomic) UIImage *repeatingImage; // ivar: _repeatingImage


-(BOOL)isAccessibilityElement;
-(id)image;
-(void)setImage:(id)arg0 ;


@end


#endif