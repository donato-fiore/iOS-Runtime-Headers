// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKSYNCCONTEXTOBJECT_H
#define _DKSYNCCONTEXTOBJECT_H


#import <Foundation/Foundation.h>

#import "_DKSyncContext.h"

@interface _DKSyncContextObject : NSObject

@property (readonly, nonatomic) _DKSyncContext *context; // ivar: _context


+(id)new;
-(id)init;
-(id)initWithContext:(id)arg0 ;


@end


#endif