// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVSYSTEMDIALOG_H
#define MSVSYSTEMDIALOG_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "MSVSystemDialogOptions.h"

@interface MSVSystemDialog : NSObject {
    *__CFUserNotification _presentedUserNotification;
    *__CFRunLoopSource _activeRunLoopSource;
    id *_pendingCompletion;
}


@property (nonatomic) *__CFRunLoopSource activeRunLoopSource;
@property (readonly, nonatomic) MSVSystemDialogOptions *options; // ivar: _options
@property (copy, nonatomic) id *pendingCompletion;
@property (nonatomic) *__CFUserNotification presentedUserNotification;
@property (readonly, nonatomic) NSArray *textFields; // ivar: _textFields


+(id)systemDialogWithOptions:(id)arg0 ;
-(id)initWithOptions:(id)arg0 ;
-(void)addTextField:(id)arg0 ;
-(void)addTextFieldWithTitle:(id)arg0 secure:(BOOL)arg1 ;
-(void)clearTextFields;
-(void)dealloc;
-(void)dismiss;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif