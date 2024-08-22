// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISDIALOGOPERATION_H
#define ISDIALOGOPERATION_H

@class NSArray;
@protocol ISDialogOperationDelegate;


#import "ISOperation.h"
#import "ISDialog.h"
#import "ISDialogButton.h"

@interface ISDialogOperation : ISOperation {
    NSArray *_textFieldValues;
}


@property NSObject<ISDialogOperationDelegate> *delegate;
@property (retain) ISDialog *dialog; // ivar: _dialog
@property BOOL performDefaultActions; // ivar: _performDefaultActions
@property (retain) ISDialogButton *selectedButton; // ivar: _selectedButton
@property (readonly) NSArray *textFieldValues;
@property (retain) id *userNotification; // ivar: _userNotification


+(id)operationWithDialog:(id)arg0 ;
+(id)operationWithError:(id)arg0 ;
-(id)init;
-(void)_handleResponseForNotification:(struct __CFUserNotification *)arg0 responseFlags:(NSUInteger)arg1 ;
-(void)_run;
-(void)_showUserNotification:(id)arg0 ;
-(void)_waitForUserNotificationResponse:(struct __CFUserNotification *)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)handleButtonSelected:(NSInteger)arg0 withResponseDictionary:(id)arg1 ;
-(void)run;


@end


#endif