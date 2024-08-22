// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16HEALTHARTICLESUI9VIDEOVIEW_H
#define _TTC16HEALTHARTICLESUI9VIDEOVIEW_H

@class UIView, NSString;



@interface _TtC16HealthArticlesUI9VideoView : UIView {
    ? videoPlayer;
    ? playWhenVisible;
    ? primaryPlayerAsset;
    ? primaryPlayerItem;
    ? playerLooper;
    ? accessibilityVideoDescription;
    ? $__lazy_storage_$_captionLabel;
}


@property (nonatomic, copy) NSString *accessibilityVideoDescription;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)nonLoopingEndOfPlay:(id)arg0 ;


@end


#endif