// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLOGOUTBUTTONVIEWCONTROLLER_H
#define CSLOGOUTBUTTONVIEWCONTROLLER_H

@protocol CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperProviding;


#import "CSCoverSheetViewControllerBase.h"
#import "CSVibrantWallpaperButton.h"

@interface CSLogoutButtonViewController : CSCoverSheetViewControllerBase

@property (readonly, nonatomic) CSVibrantWallpaperButton *button;
@property (weak, nonatomic) NSObject<CSUserSessionControlling> *userSessionController; // ivar: _userSessionController
@property (weak, nonatomic) NSObject<CSWallpaperColorProvider> *wallpaperColorProvider; // ivar: _wallpaperColorProvider
@property (weak, nonatomic) NSObject<CSWallpaperProviding> *wallpaperProvider; // ivar: _wallpaperProvider


-(void)_buttonPressed:(id)arg0 ;
-(void)loadView;
-(void)setWallpaperViewProvider:(id)arg0 ;


@end


#endif