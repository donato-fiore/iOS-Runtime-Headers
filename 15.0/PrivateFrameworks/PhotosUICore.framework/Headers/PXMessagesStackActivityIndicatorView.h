// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESSTACKACTIVITYINDICATORVIEW_H
#define PXMESSAGESSTACKACTIVITYINDICATORVIEW_H

@class UIView, UIVisualEffectView, UIActivityIndicatorView;
@protocol PXGReusableView, NSCopying;



@interface PXMessagesStackActivityIndicatorView : UIView <PXGReusableView>

 {
    UIVisualEffectView *_visualEffectView;
    UIActivityIndicatorView *_activityIndicatorView;
}


@property (nonatomic) CGRect clippingRect; // ivar: clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData; // ivar: userData


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif