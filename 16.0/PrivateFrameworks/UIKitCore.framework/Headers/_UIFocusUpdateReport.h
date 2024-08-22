// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSUPDATEREPORT_H
#define _UIFOCUSUPDATEREPORT_H


#import <Foundation/Foundation.h>

#import "UIFocusUpdateContext.h"
#import "UIFocusSystem.h"

@interface _UIFocusUpdateReport : NSObject

@property (retain, nonatomic) UIFocusUpdateContext *context; // ivar: _context
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem; // ivar: _focusSystem
@property (readonly, nonatomic) BOOL shouldLog;


-(id)init;
-(id)initWithFocusSystem:(id)arg0 ;


@end


#endif