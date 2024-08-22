// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSREMOTEWATCHVIEW_H
#define BPSREMOTEWATCHVIEW_H

@class UIView, NSString, PBBridgeAssetsManager, UIImageView;


#import "BPSWatchView.h"

@interface BPSRemoteWatchView : UIView

@property (copy, nonatomic) NSString *advertisingName; // ivar: _advertisingName
@property (retain, nonatomic) PBBridgeAssetsManager *assetManager; // ivar: _assetManager
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) BPSWatchView *watch; // ivar: _watch
@property (retain, nonatomic) UIImageView *watchScreen; // ivar: _watchScreen


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif