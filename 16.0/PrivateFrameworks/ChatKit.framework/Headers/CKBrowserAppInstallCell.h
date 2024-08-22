// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKBROWSERAPPINSTALLCELL_H
#define CKBROWSERAPPINSTALLCELL_H



#import "CKBrowserCell.h"
#import "CKBrowserIconView.h"
#import "CKAppInstallation.h"

@interface CKBrowserAppInstallCell : CKBrowserCell

@property (retain, nonatomic) CKBrowserIconView *browserIconView; // ivar: _browserIconView
@property (retain, nonatomic) CKAppInstallation *installation; // ivar: _installation


+(id)reuseIdentifier;
-(id)iconView;
-(void)layoutSubviews;


@end


#endif