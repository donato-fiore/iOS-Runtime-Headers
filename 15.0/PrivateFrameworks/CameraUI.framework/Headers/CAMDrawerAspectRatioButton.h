// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMDRAWERASPECTRATIOBUTTON_H
#define CAMDRAWERASPECTRATIOBUTTON_H

@class NSMutableDictionary;


#import "CAMControlDrawerMenuButton.h"

@interface CAMDrawerAspectRatioButton : CAMControlDrawerMenuButton

@property (readonly, nonatomic) NSMutableDictionary *_imagesByText; // ivar: __imagesByText
@property (nonatomic) NSInteger aspectRatio; // ivar: _aspectRatio


-(BOOL)isMenuItemSelected:(id)arg0 ;
-(NSInteger)controlType;
-(id)_imageForAspectRatio:(NSInteger)arg0 ;
-(id)_titleForAspectRatio:(NSInteger)arg0 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)imageNameForCurrentState;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(id)loadMenuItems;
-(void)didSelectMenuItem:(id)arg0 ;
-(void)updateImage;


@end


#endif