// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXMESSAGESDEBUGTAPBACKVIEW_H
#define PXMESSAGESDEBUGTAPBACKVIEW_H

@class UIView, UIImageView;
@protocol PXGReusableView, NSCopying;


#import "PXMessagesDebugTapbackUserData.h"

@interface PXMessagesDebugTapbackView : UIView <PXGReusableView>

 {
    UIImageView *_heartImageView;
    PXMessagesDebugTapbackUserData *_userData;
}


@property (nonatomic) CGRect clippingRect; // ivar: clippingRect
@property (nonatomic) CGFloat desiredAlpha; // ivar: _desiredAlpha
@property (nonatomic) BOOL isAnimating; // ivar: _isAnimating
@property (nonatomic) NSInteger reuseCounter; // ivar: _reuseCounter
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) NSObject<NSCopying> *userData;


-(BOOL)shouldReloadForUserData:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bounce;
-(void)_updateFinalAlpha;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif