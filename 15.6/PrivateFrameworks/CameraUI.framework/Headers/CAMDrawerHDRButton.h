// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMDRAWERHDRBUTTON_H
#define CAMDRAWERHDRBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerHDRButton : CAMControlDrawerMenuButton

@property (nonatomic) BOOL allowAutoHDR; // ivar: _allowAutoHDR
@property (nonatomic) BOOL allowHDROn; // ivar: _allowHDROn
@property (nonatomic, setter=setHDRMode:) NSInteger hdrMode; // ivar: _hdrMode


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