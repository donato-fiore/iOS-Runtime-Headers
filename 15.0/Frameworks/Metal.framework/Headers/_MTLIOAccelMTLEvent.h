// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MTLIOACCELMTLEVENT_H
#define _MTLIOACCELMTLEVENT_H

@class IOAccelMTLEvent, NSString;
@protocol MTLEvent, MTLDevice;



@interface _MTLIOAccelMTLEvent : IOAccelMTLEvent <MTLEvent>

 {
    NSUInteger _labelTraceID;
    NSString *_label;
    os_unfair_lock_s _labelLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (copy) NSString *label;
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(id)retainedLabel;
-(void)dealloc;


@end


#endif