// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIALERTACTION_H
#define VUIALERTACTION_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface VUIAlertAction : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)vui_actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
+(id)vui_actionWithTitle:(id)arg0 style:(NSInteger)arg1 metrics:(id)arg2 handler:(id)arg3 ;


@end


#endif