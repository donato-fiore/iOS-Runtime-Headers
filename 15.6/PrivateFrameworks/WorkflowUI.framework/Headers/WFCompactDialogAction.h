// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOMPACTDIALOGACTION_H
#define WFCOMPACTDIALOGACTION_H

@class WFDialogButton, UIInterfaceAction;

#import <Foundation/Foundation.h>


@interface WFCompactDialogAction : NSObject

@property (readonly, nonatomic) WFDialogButton *dialogButton; // ivar: _dialogButton
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic) UIInterfaceAction *interfaceAction; // ivar: _interfaceAction


+(id)actionForButton:(id)arg0 handler:(id)arg1 ;
-(void)invokeHandler;


@end


#endif