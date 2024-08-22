// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSDIALOGBUTTON_H
#define AMSDIALOGBUTTON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSDialogButton : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)buttonWithTitle:(id)arg0 handler:(id)arg1 ;
+(id)buttonWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;


@end


#endif