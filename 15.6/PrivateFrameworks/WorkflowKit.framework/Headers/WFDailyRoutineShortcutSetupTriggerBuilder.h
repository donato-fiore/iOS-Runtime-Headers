// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDAILYROUTINESHORTCUTSETUPTRIGGERBUILDER_H
#define WFDAILYROUTINESHORTCUTSETUPTRIGGERBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFTrigger.h"

@interface WFDailyRoutineShortcutSetupTriggerBuilder : NSObject

@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) WFTrigger *templateTrigger; // ivar: _templateTrigger
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 templateTrigger:(id)arg2 ;
-(id)triggerWithConfiguration:(id)arg0 ;


@end


#endif