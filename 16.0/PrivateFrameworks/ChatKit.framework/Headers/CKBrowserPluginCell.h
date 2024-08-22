// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERPLUGINCELL_H
#define CKBROWSERPLUGINCELL_H

@class UIImageView, IMBalloonPlugin;


#import "CKBrowserCell.h"

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView *_selectionOutline;
}


@property (retain, nonatomic) UIImageView *browserImage; // ivar: _browserImage
@property (retain, nonatomic) IMBalloonPlugin *plugin; // ivar: _plugin


+(id)reuseIdentifier;
-(id)iconView;
-(void)_setImageForPlugin:(id)arg0 ;
-(void)_updateShinyStatus;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif