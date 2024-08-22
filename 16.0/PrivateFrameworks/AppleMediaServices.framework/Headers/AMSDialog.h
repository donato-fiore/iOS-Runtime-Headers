// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDIALOG_H
#define AMSDIALOG_H

@class NSArray, NSImage, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSDialog : NSObject {
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
}


@property (copy, nonatomic) NSArray *buttons; // ivar: _buttons
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger selectedButtonIndex; // ivar: _selectedButtonIndex
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSArray *textFields; // ivar: _textFields
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)dialogWithTitle:(id)arg0 message:(id)arg1 ;
+(id)dialogWithTitle:(id)arg0 message:(id)arg1 style:(NSInteger)arg2 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 style:(NSInteger)arg2 ;
-(void)addButton:(id)arg0 ;
-(void)addTextField:(id)arg0 ;
-(void)present;
-(void)presentFromViewController:(id)arg0 ;
-(void)presentSheetFromWindow:(id)arg0 ;
-(void)presentSystemDialog;


@end


#endif