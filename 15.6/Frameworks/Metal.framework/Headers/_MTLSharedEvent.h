// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLSHAREDEVENT_H
#define _MTLSHAREDEVENT_H

@class IOSurfaceSharedEvent, NSString;
@protocol MTLSharedEventSPI, MTLDevice;



@interface _MTLSharedEvent : IOSurfaceSharedEvent <MTLSharedEventSPI>

 {
    NSString *_label;
    os_unfair_lock_s _labelLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) NSUInteger labelTraceID; // ivar: _labelTraceID
@property NSUInteger signaledValue;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(id)initWithSharedEventHandle:(id)arg0 ;
-(id)newSharedEventHandle;
-(id)retainedLabel;
-(unsigned int)encodeKernelSignalEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 ;
-(unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 ;
-(unsigned int)encodeKernelWaitEventCommandArgs:(struct IOAccelKernelCommandSignalOrWaitEventArgs *)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)dealloc;
-(void)notifyListener:(id)arg0 atValue:(NSUInteger)arg1 block:(id)arg2 ;


@end


#endif