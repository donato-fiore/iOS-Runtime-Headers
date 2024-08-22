// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCBORDEREDSCREENSHOTVIEW_H
#define ASCBORDEREDSCREENSHOTVIEW_H

@class UIView;


#import "ASCArtworkView.h"

@interface ASCBorderedScreenshotView : UIView

@property (retain, nonatomic) ASCArtworkView *artworkView; // ivar: _artworkView


-(id)imageView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 screenshotDisplayConfiguration:(id)arg1 ;
-(struct CGSize )preferredArtworkSize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif