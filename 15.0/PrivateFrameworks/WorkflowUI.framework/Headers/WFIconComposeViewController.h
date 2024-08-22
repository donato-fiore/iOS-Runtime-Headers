// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFICONCOMPOSEVIEWCONTROLLER_H
#define WFICONCOMPOSEVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, WFWorkflow;
@protocol WFColorPickerDelegate, WFGlyphPickerDelegate, UINavigationControllerDelegate;


#import "WFColorPicker.h"
#import "WFGlyphPicker.h"
#import "WFIconComposePreviewView.h"

@interface WFIconComposeViewController : UIViewController <WFColorPickerDelegate, WFGlyphPickerDelegate, UINavigationControllerDelegate>



@property (weak, nonatomic) UIView *bottomSeparator; // ivar: _bottomSeparator
@property (weak, nonatomic) WFColorPicker *colorPicker; // ivar: _colorPicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) WFGlyphPicker *glyphPicker; // ivar: _glyphPicker
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) WFIconComposePreviewView *iconView; // ivar: _iconView
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *topSeperator; // ivar: _topSeperator
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)colorPicker:(id)arg0 didSelectColor:(id)arg1 ;
-(void)glyphPicker:(id)arg0 didSelectGlyphWithCharacter:(unsigned short)arg1 ;
-(void)loadView;
-(void)pickedSegment:(id)arg0 ;
-(void)saveIcon:(id)arg0 ;
-(void)updateAccessibilityValue;


@end


#endif