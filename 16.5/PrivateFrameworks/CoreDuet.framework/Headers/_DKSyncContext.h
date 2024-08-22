// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSYNCCONTEXT_H
#define _DKSYNCCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_DKKnowledgeStorage.h"

@interface _DKSyncContext : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) _DKKnowledgeStorage *storage; // ivar: _storage


+(id)new;
-(id)init;
-(id)initWithName:(id)arg0 ;


@end


#endif