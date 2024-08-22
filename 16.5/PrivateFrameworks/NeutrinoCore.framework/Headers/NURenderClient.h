// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NURENDERCLIENT_H
#define NURENDERCLIENT_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NUPriority.h"
#import "NURenderContext.h"

@interface NURenderClient : NSObject

@property (copy) id *genericCompletionBlock; // ivar: _genericCompletionBlock
@property (copy) NSString *name; // ivar: _name
@property (retain) NUPriority *priority; // ivar: _priority
@property (retain, nonatomic) NURenderContext *renderContext; // ivar: _renderContext
@property (readonly) NSObject<OS_dispatch_queue> *responseQueue; // ivar: _responseQueue
@property (nonatomic) BOOL shouldCoalesceUpdates; // ivar: _shouldCoalesceUpdates


-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 responseQueue:(id)arg1 ;
-(void)cancel;
-(void)submitGenericRequest:(id)arg0 ;
-(void)submitGenericRequest:(id)arg0 completion:(id)arg1 ;


@end


#endif