// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCONTACTPICKER_H
#define PKCONTACTPICKER_H

@class NSString, UIViewController;
@protocol CNContactPickerDelegate;

#import <Foundation/Foundation.h>


@interface PKContactPicker : NSObject <CNContactPickerDelegate>



@property (copy, nonatomic) id *cancelationHandler; // ivar: _cancelationHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *pickerViewController; // ivar: _pickerViewController
@property (copy, nonatomic) id *selectionHandler; // ivar: _selectionHandler
@property (readonly) Class superclass;


// -(id)initWithSelectionHandler:(id)arg0 cancelationHandler:(unk)arg1  ;
-(void)contactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)contactPickerDidCancel:(id)arg0 ;


@end


#endif