// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRXACTION_H
#define PRXACTION_H

@class UIButton, NSString;

#import <Foundation/Foundation.h>


@interface PRXAction : NSObject {
    id *_handler;
}


@property (weak, nonatomic) UIButton *button; // ivar: _button
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) BOOL usesLegacyStyling; // ivar: _usesLegacyStyling


+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
+(id)defaultDismissalActionForViewController:(id)arg0 ;
+(id)dismissalConfirmationActionForViewController:(id)arg0 withTitle:(id)arg1 message:(id)arg2 confirmButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(void)_callHandler;


@end


#endif