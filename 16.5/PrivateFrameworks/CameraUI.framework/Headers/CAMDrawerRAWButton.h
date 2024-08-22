// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMDRAWERRAWBUTTON_H
#define CAMDRAWERRAWBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerRAWButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setRAWMode:) NSInteger rawMode; // ivar: _rawMode


-(BOOL)isMenuItemSelected:(id)arg0 ;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseSlash;
-(NSInteger)controlType;
-(id)imageNameForAXHUD;
-(id)imageNameForCurrentState;
-(id)loadMenuItems;
-(void)didSelectMenuItem:(id)arg0 ;


@end


#endif