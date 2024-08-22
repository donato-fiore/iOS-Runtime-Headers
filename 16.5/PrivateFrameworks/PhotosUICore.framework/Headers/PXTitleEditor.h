// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXTITLEEDITOR_H
#define PXTITLEEDITOR_H

@class NSString, UIAlertAction, UITextField;

#import <Foundation/Foundation.h>


@interface PXTitleEditor : NSObject

@property (copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) UIAlertAction *confirmAction; // ivar: _confirmAction
@property (copy, nonatomic) NSString *confirmButtonTitle; // ivar: _confirmButtonTitle
@property (nonatomic) BOOL includesSubtitle; // ivar: _includesSubtitle
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (copy, nonatomic) NSString *subtitlePlaceholder; // ivar: _subtitlePlaceholder
@property (retain, nonatomic) UITextField *subtitleTextField; // ivar: _subtitleTextField
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSString *titlePlaceholder; // ivar: _titlePlaceholder
@property (retain, nonatomic) UITextField *titleTextField; // ivar: _titleTextField
@property (copy, nonatomic) id *validation; // ivar: _validation


-(id)createAlertController;
-(id)init;
-(void)_handleSuccess:(BOOL)arg0 ;
-(void)_invalidateConfirmAction;
-(void)_textFieldDidChange:(id)arg0 ;
-(void)_updateConfirmAction;
-(void)_updateExposedProperties;
-(void)presentFromViewController:(id)arg0 ;


@end


#endif