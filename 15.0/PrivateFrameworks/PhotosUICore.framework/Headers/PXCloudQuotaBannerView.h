// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCLOUDQUOTABANNERVIEW_H
#define PXCLOUDQUOTABANNERVIEW_H

@class ICQBannerView;


#import "PXCloudQuotaView.h"

@interface PXCloudQuotaBannerView : PXCloudQuotaView {
    ICQBannerView *_bannerView;
}




-(id)_font;
-(id)init;
-(id)initWithBannerView:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentViewSizeForWidth:(CGFloat)arg0 ;


@end


#endif