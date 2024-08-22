// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDRAWERPRORESBUTTON_H
#define CAMDRAWERPRORESBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerProResButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setProResVideoMode:) NSInteger proResVideoMode; // ivar: _proResVideoMode


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