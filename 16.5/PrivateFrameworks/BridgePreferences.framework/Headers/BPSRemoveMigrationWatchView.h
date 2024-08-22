// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BPSREMOVEMIGRATIONWATCHVIEW_H
#define BPSREMOVEMIGRATIONWATCHVIEW_H

@class UIView, NSString, PBBridgeAssetsManager;


#import "BPSWatchView.h"

@interface BPSRemoveMigrationWatchView : UIView

@property (copy, nonatomic) NSString *advertisingName; // ivar: _advertisingName
@property (retain, nonatomic) PBBridgeAssetsManager *assetManager; // ivar: _assetManager
@property (retain, nonatomic) BPSWatchView *watch; // ivar: _watch


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif