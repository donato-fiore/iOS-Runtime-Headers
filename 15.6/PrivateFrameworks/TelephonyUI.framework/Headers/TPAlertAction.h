// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPALERTACTION_H
#define TPALERTACTION_H

@class UIAlertAction;



@interface TPAlertAction : UIAlertAction

@property (copy, nonatomic) id *handler; // ivar: _handler


+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
+(id)actionWithType:(NSUInteger)arg0 ;
+(id)preferencesURLForClassName:(id)arg0 ;


@end


#endif