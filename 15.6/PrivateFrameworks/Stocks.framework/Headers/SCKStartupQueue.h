// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCKSTARTUPQUEUE_H
#define SCKSTARTUPQUEUE_H


#import <Foundation/Foundation.h>

#import "SCKAsyncSerialQueue.h"

@interface SCKStartupQueue : NSObject

@property (retain, nonatomic) SCKAsyncSerialQueue *startupTaskQueue; // ivar: _startupTaskQueue


-(id)initWithDeferredStartup:(BOOL)arg0 ;
-(void)enqueueStartupBlock:(id)arg0 ;
-(void)executeAfterStartup:(id)arg0 ;


@end


#endif