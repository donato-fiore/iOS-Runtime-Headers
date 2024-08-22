// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMDRAWERLIVEPHOTOBUTTON_H
#define CAMDRAWERLIVEPHOTOBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerLivePhotoButton : CAMControlDrawerMenuButton

@property (nonatomic) NSInteger livePhotoMode; // ivar: _livePhotoMode


-(BOOL)isMenuItemSelected:(id)arg0 ;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(NSInteger)controlType;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)loadMenuItems;
-(void)didSelectMenuItem:(id)arg0 ;


@end


#endif