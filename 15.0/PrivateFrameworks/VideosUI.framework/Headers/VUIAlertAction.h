// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIALERTACTION_H
#define VUIALERTACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VUIAlertAction : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)vui_actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;


@end


#endif