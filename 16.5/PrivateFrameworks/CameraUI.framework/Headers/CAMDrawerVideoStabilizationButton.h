// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMDRAWERVIDEOSTABILIZATIONBUTTON_H
#define CAMDRAWERVIDEOSTABILIZATIONBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerVideoStabilizationButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setVideoStabilizationMode:) NSInteger videoStabilizationMode; // ivar: _videoStabilizationMode


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