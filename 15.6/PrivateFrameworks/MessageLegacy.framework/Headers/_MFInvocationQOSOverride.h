// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFINVOCATIONQOSOVERRIDE_H
#define _MFINVOCATIONQOSOVERRIDE_H


#import <Foundation/Foundation.h>


@interface _MFInvocationQOSOverride : NSObject {
    *pthread_override_s _override;
}


@property (readonly, nonatomic) unsigned int desiredQoS; // ivar: _desiredQoS
@property (readonly, nonatomic, getter=isLowPriority) BOOL lowPriority; // ivar: _lowPriority
@property (readonly, nonatomic) *_opaque_pthread_t pthread; // ivar: _pthread


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)removeOverride;
-(NSUInteger)hash;
-(id)initWithPthread:(struct _opaque_pthread_t *)arg0 desiredQoS:(unsigned int)arg1 lowPriority:(BOOL)arg2 ;
-(void)applyOverrideWhileForeground:(BOOL)arg0 ;
-(void)dealloc;


@end


#endif