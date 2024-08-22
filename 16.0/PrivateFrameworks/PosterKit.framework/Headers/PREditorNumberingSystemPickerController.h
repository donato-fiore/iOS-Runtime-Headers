// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITORNUMBERINGSYSTEMPICKERCONTROLLER_H
#define PREDITORNUMBERINGSYSTEMPICKERCONTROLLER_H

@class NSLocale, UIFont, NSString;
@protocol PREditorNumberingSystemPickerControllerDelegate;

#import <Foundation/Foundation.h>


@interface PREditorNumberingSystemPickerController : NSObject

@property (weak, nonatomic) NSObject<PREditorNumberingSystemPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSLocale *displayLocale;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, copy, nonatomic) NSString *selectedNumberingSystem; // ivar: _selectedNumberingSystem


+(id)allNumberingSystems;
+(id)displayFontForFont:(id)arg0 ;
+(id)displayNameForNumberingSystem:(id)arg0 ;
+(id)systemNumberingSystem;
-(id)initWithSelectedNumberingSystem:(id)arg0 selectedFont:(id)arg1 ;
-(id)menu;
-(void)didSelectNumberingSystem:(id)arg0 ;


@end


#endif