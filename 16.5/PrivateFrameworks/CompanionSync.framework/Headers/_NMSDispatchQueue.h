// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NMSDISPATCHQUEUE_H
#define _NMSDISPATCHQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_q;
    uint8_t _r;
}


@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;


-(id)init;
-(id)initWithName:(id)arg0 attributes:(id)arg1 target:(id)arg2 ;
-(void)async:(id)arg0 ;
-(void)dealloc;
-(void)resume;
-(void)suspend;
-(void)sync:(id)arg0 ;


@end


#endif