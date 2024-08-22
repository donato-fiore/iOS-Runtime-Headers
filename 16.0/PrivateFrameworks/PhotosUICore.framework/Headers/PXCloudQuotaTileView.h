// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXCLOUDQUOTATILEVIEW_H
#define PXCLOUDQUOTATILEVIEW_H

@class ICQTileView;


#import "PXCloudQuotaView.h"

@interface PXCloudQuotaTileView : PXCloudQuotaView {
    ICQTileView *_tileView;
}




-(id)contentViewFont;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTileView:(id)arg0 ;
-(struct CGSize )contentViewSizeForWidth:(CGFloat)arg0 ;


@end


#endif