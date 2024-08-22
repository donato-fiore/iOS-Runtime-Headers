// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __HMFSYSTEMCONFIGURATIONDATASOURCE_H
#define __HMFSYSTEMCONFIGURATIONDATASOURCE_H

@class NSString;
@protocol HMFSystemInfoNameDataSource, HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;


#import "HMFObject.h"

@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFSystemInfoNameDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) *__SCDynamicStore store; // ivar: _store
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif