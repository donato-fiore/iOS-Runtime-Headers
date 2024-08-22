// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIRESPONDER_OVERRIDE_HOST_ENTRY_H
#define _UIRESPONDER_OVERRIDE_HOST_ENTRY_H


#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface _UIResponder_Override_Host_Entry : NSObject

@property (readonly, weak) UIResponder *overridden; // ivar: _overridden
@property (readonly) NSInteger type; // ivar: _type


+(id)entryWithResponder:(id)arg0 forType:(NSInteger)arg1 ;
-(NSUInteger)hash;
-(id)description;


@end


#endif