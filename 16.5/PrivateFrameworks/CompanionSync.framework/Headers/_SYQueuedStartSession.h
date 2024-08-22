// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYQUEUEDSTARTSESSION_H
#define _SYQUEUEDSTARTSESSION_H


#import <Foundation/Foundation.h>

#import "SYStartSyncSession.h"

@interface _SYQueuedStartSession : NSObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) SYStartSyncSession *request; // ivar: _request


-(id)initWithRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif