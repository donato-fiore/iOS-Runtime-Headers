// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCACTIONINFOBUTTON_H
#define VKCACTIONINFOBUTTON_H

@class UIButton, NSArray, UIMenu, UIImage, UIImageSymbolConfiguration, NSString;
@protocol VKCActionInfoButtonDelegate;


#import "VKCBaseDataDetectorElement.h"

@interface VKCActionInfoButton : UIButton

@property (retain, nonatomic) NSArray *allUnfilteredElements; // ivar: _allUnfilteredElements
@property (retain, nonatomic) UIMenu *customMenu;
@property (weak, nonatomic) NSObject<VKCActionInfoButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImage *menuImage; // ivar: _menuImage
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // ivar: _preferredSymbolConfiguration
@property (retain, nonatomic) VKCBaseDataDetectorElement *representedElement; // ivar: _representedElement
@property (retain, nonatomic) NSString *text; // ivar: _text


+(id)buttonWithImage:(id)arg0 text:(id)arg1 ;
-(BOOL)hasAction:(SEL)arg0 ;
-(NSInteger)overrideUserInterfaceStyle;
-(id)filledButtonConfiguration;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)translucentButtonConfiguration;
-(id)translucentSelectedButtonConfiguration;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)performDefaultElementAction;
-(void)tearDown;
-(void)vk_addTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif