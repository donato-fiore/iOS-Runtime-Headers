// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLOADFAILEDPROXYCONTENTBANNERVIEW_H
#define MFLOADFAILEDPROXYCONTENTBANNERVIEW_H

@protocol MFLoadFailedProxyContentBannerViewDelegate;


#import "MFSuggestionBannerView.h"

@interface MFLoadFailedProxyContentBannerView : MFSuggestionBannerView

@property (weak, nonatomic) NSObject<MFLoadFailedProxyContentBannerViewDelegate> *delegate; // ivar: _delegate


-(id)bannerIcon;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_titleControlTapped:(id)arg0 ;
-(void)primaryAction;


@end


#endif