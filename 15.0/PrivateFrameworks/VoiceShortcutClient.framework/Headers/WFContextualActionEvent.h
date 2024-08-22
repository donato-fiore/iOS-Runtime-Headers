// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTEXTUALACTIONEVENT_H
#define WFCONTEXTUALACTIONEVENT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "WFContextualAction.h"

@interface WFContextualActionEvent : NSObject

@property (readonly, nonatomic) WFContextualAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *containerName; // ivar: _containerName
@property (readonly, nonatomic) NSArray *contentTypes; // ivar: _contentTypes
@property (readonly, nonatomic) NSUInteger surface; // ivar: _surface


-(id)initWithAction:(id)arg0 contentTypes:(id)arg1 containerName:(id)arg2 surface:(NSUInteger)arg3 ;


@end


#endif