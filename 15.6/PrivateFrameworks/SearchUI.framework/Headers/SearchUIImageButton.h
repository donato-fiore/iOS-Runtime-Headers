// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIIMAGEBUTTON_H
#define SEARCHUIIMAGEBUTTON_H

@class UIButton;


#import "SearchUIImage.h"

@interface SearchUIImageButton : UIButton

@property (retain, nonatomic) SearchUIImage *selectedImage; // ivar: _selectedImage
@property (retain, nonatomic) SearchUIImage *unselectedImage; // ivar: _unselectedImage


-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif