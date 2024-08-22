// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLOGOUTBUTTONVIEWCONTROLLER_H
#define CSLOGOUTBUTTONVIEWCONTROLLER_H

@protocol CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperViewProviding;


#import "CSCoverSheetViewControllerBase.h"
#import "CSVibrantWallpaperButton.h"

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

@property (readonly, nonatomic) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) NSObject<CSUserSessionControlling> *userSessionController; // ivar: _userSessionController
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (weak, nonatomic) NSObject<CSWallpaperViewProviding> *wallpaperViewProvider; // ivar: _wallpaperViewProvider


-(void)_buttonPressed:(id)arg0 ;
-(void)loadView;


@end


#endif