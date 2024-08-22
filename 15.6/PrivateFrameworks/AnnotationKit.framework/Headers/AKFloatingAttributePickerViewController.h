// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKFLOATINGATTRIBUTEPICKERVIEWCONTROLLER_H
#define AKFLOATINGATTRIBUTEPICKERVIEWCONTROLLER_H

@class UIViewController, UIColor, UIBarButtonItem, NSString, NSArray, UIView, UIToolbar;
@protocol AKTextAttributesUserInterfaceItem;


#import "AKColorPaletteView.h"
#import "AKController.h"

@interface AKFloatingAttributePickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger colorAttributeTag; // ivar: _colorAttributeTag
@property (retain, nonatomic) AKColorPaletteView *colorPalette; // ivar: _colorPalette
@property (retain, nonatomic) UIBarButtonItem *colorPaletteButtonItem; // ivar: _colorPaletteButtonItem
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *rightButtonItems; // ivar: _rightButtonItems
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSArray *staticItems; // ivar: _staticItems
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag
@property (retain, nonatomic) UIToolbar *toolbar; // ivar: _toolbar


-(id)convertTextAttributes:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)syncTextAttributesToUI:(id)arg0 ;
-(void)valueChanged:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif