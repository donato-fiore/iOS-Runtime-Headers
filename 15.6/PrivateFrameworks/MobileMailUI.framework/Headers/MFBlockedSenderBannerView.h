// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFBLOCKEDSENDERBANNERVIEW_H
#define MFBLOCKEDSENDERBANNERVIEW_H

@protocol MFBlockedSenderBannerViewDelegate;


#import "MFSuggestionBannerView.h"

@interface MFBlockedSenderBannerView : MFSuggestionBannerView

@property (weak, nonatomic) NSObject<MFBlockedSenderBannerViewDelegate> *delegate; // ivar: _delegate


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_bannerDismissed:(id)arg0 ;
-(void)_titleControlTapped:(id)arg0 ;
-(void)dismissAction;
-(void)primaryAction;


@end


#endif