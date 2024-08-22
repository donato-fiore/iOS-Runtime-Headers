// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMESSAGESSTACKADDITIONALITEMSVIEW_H
#define PXMESSAGESSTACKADDITIONALITEMSVIEW_H

@class UIView, UIVisualEffectView, UILabel;
@protocol PXGReusableView;


#import "PXMessagesStackAdditionalItemsViewUserData.h"

@interface PXMessagesStackAdditionalItemsView : UIView <PXGReusableView>

 {
    UIVisualEffectView *_visualEffectView;
    UILabel *_label;
}


@property (nonatomic) CGRect clippingRect; // ivar: clippingRect
@property (readonly, nonatomic) BOOL shouldReuseWhenInvisible;
@property (copy, nonatomic) PXMessagesStackAdditionalItemsViewUserData *userData; // ivar: _userData


-(id)_localizedTitleForAdditionalItemsCount:(struct ? )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)becomeReusable;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif