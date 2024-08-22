// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSACTIONPICKERVIEWASSISTANT_H
#define BCSACTIONPICKERVIEWASSISTANT_H

@class UIAlertController, NSString;
@protocol BCSActionPickerItemDelegate;

#import <Foundation/Foundation.h>


@interface BCSActionPickerViewAssistant : NSObject <BCSActionPickerItemDelegate>

 {
    UIAlertController *_alertController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isShowingPicker) BOOL showingPicker;
@property (readonly) Class superclass;


-(BOOL)showActionPickerWithItems:(id)arg0 fromViewController:(id)arg1 presentingRect:(struct CGRect )arg2 ;
-(id)actionPickerItemAlertController:(id)arg0 ;
-(void)_cleanUpAlertController;
-(void)actionPickerItem:(id)arg0 didDismissAlertController:(id)arg1 ;


@end


#endif