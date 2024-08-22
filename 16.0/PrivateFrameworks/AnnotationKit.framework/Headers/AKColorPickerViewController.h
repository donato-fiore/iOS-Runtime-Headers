// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKCOLORPICKERVIEWCONTROLLER_H
#define AKCOLORPICKERVIEWCONTROLLER_H

@class UIViewController, UIColor, NSString;
@protocol AKTextAttributesUserInterfaceItem;


#import "AKColorPaletteView.h"
#import "AKController.h"

@interface AKColorPickerViewController : UIViewController <AKTextAttributesUserInterfaceItem>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) NSInteger colorAttributeTag; // ivar: _colorAttributeTag
@property (retain, nonatomic) AKColorPaletteView *colorPalette; // ivar: _colorPalette
@property (weak, nonatomic) AKController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger tag; // ivar: _tag


-(id)convertTextAttributes:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(void)syncTextAttributesToUI:(id)arg0 ;
-(void)valueChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif