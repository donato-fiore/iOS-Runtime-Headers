// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMDRAWERSHAREDLIBRARYBUTTON_H
#define CAMDRAWERSHAREDLIBRARYBUTTON_H



#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerSharedLibraryButton : CAMControlDrawerMenuButton

@property (nonatomic, setter=setSharedLibraryMode:) NSInteger sharedLibraryMode; // ivar: _sharedLibraryMode


-(BOOL)isMenuItemSelected:(id)arg0 ;
-(BOOL)shouldShowSlashForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldUseSlash;
-(NSInteger)controlType;
-(id)imageNameForCurrentState;
-(id)loadMenuItems;
-(void)didSelectMenuItem:(id)arg0 ;


@end


#endif