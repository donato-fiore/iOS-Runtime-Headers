// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFALERTBUTTON_H
#define WFALERTBUTTON_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WFAlert.h"

@interface WFAlertButton : NSObject

@property (weak, nonatomic) WFAlert *alert; // ivar: _alert
@property (copy, nonatomic) NSArray *alternativeSpeakableMatches; // ivar: _alternativeSpeakableMatches
@property (readonly, copy, nonatomic) id *handler; // ivar: _handler
@property (readonly, nonatomic, getter=isPreferred) BOOL preferred; // ivar: _preferred
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(id)buttonWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
+(id)buttonWithTitle:(id)arg0 style:(NSInteger)arg1 preferred:(BOOL)arg2 handler:(id)arg3 ;
+(id)cancelButtonWithHandler:(id)arg0 ;
+(id)cancelButtonWithTarget:(id)arg0 action:(SEL)arg1 ;
+(id)okButtonWithHandler:(id)arg0 ;
+(id)okButtonWithTarget:(id)arg0 action:(SEL)arg1 ;
// -(id)initWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 preferred:(unk)arg3  ;


@end


#endif