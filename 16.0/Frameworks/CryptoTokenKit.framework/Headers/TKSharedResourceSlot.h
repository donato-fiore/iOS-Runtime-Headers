// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TKSHAREDRESOURCESLOT_H
#define TKSHAREDRESOURCESLOT_H

@class NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TKSharedResource.h"

@interface TKSharedResourceSlot : NSObject {
    NSString *_name;
    TKSharedResource *_resource;
    id *_object;
    NSObject<OS_dispatch_source> *_idleTimer;
}


@property (copy, nonatomic) id *createObjectBlock; // ivar: _createObjectBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idleQueue; // ivar: _idleQueue
@property (nonatomic) CGFloat idleTimeout; // ivar: _idleTimeout
@property (copy, nonatomic) id *objectDestroyedBlock; // ivar: _objectDestroyedBlock


-(id)description;
-(id)initWithName:(id)arg0 ;
-(id)object;
-(id)resourceWithError:(*id)arg0 ;
-(void)dealloc;
-(void)destroyObject;
-(void)releaseResource;


@end


#endif