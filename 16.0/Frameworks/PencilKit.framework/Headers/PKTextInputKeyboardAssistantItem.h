// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTKEYBOARDASSISTANTITEM_H
#define PKTEXTINPUTKEYBOARDASSISTANTITEM_H

@class UIBarButtonItem, UIImage, NSString;
@protocol PKPaletteFloatingKeyboardControllerDelegate, PKTextInputKeyboardAssistantItemDelegate;


#import "PKTextInputLanguageSelectionToken.h"
#import "PKPaletteFloatingKeyboardController.h"

@interface PKTextInputKeyboardAssistantItem : UIBarButtonItem <PKPaletteFloatingKeyboardControllerDelegate>

 {
    NSInteger _floatingKeyboardType;
    UIImage *_indicatorImage;
    PKTextInputLanguageSelectionToken *_observerToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKTextInputKeyboardAssistantItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKPaletteFloatingKeyboardController *floatingKeyboardController; // ivar: _floatingKeyboardController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_currentInteraction;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)responderForFloatingKeyboardController:(id)arg0 ;
-(void)_updateImageAndNotify;
-(void)dealloc;
-(void)didAction:(id)arg0 ;
-(void)didDisplayAssistantItem;
-(void)floatingKeyboardController:(id)arg0 didChangeKeyboardType:(NSInteger)arg1 ;
-(void)floatingKeyboardControllerWillHide:(id)arg0 ;
-(void)floatingKeyboardControllerWillShow:(id)arg0 ;


@end


#endif