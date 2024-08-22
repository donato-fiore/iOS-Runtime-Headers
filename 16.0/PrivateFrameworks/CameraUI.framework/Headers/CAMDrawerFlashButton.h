// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMDRAWERFLASHBUTTON_H
#define CAMDRAWERFLASHBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton

@property (nonatomic) NSInteger flashMode; // ivar: _flashMode
@property (nonatomic, getter=isFlashUnavailable) BOOL flashUnavailable; // ivar: _flashUnavailable


-(BOOL)isExpandable;
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