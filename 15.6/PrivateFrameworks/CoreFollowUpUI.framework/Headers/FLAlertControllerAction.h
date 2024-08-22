// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLALERTCONTROLLERACTION_H
#define FLALERTCONTROLLERACTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FLAlertControllerAction : NSObject

@property (copy, nonatomic) id *handler; // ivar: _handler
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;


@end


#endif