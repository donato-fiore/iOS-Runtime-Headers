// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSBANNERVIEW_H
#define CPSBANNERVIEW_H

@class UIView;


#import "CPSBannerItem.h"

@interface CPSBannerView : UIView

@property (retain, nonatomic) CPSBannerItem *bannerItem; // ivar: _bannerItem


-(id)applicationIconImage;
-(id)initWithBannerItem:(id)arg0 ;
-(void)updateBannerWithBannerItem:(id)arg0 ;


@end


#endif