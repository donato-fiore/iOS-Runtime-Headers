// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCHIDDEVICEINPUT_H
#define GCHIDDEVICEINPUT_H

@class NSMutableArray, NSSet;

#import <Foundation/Foundation.h>


@interface GCHIDDeviceInput : NSObject {
    *__IOHIDQueue _queue;
    id *_cancelHandler;
    id *_inputHandler;
    NSMutableArray *_changedElements;
    NSUInteger _cachedDeviceRegistryEntryID;
    BOOL _activated;
}


@property (readonly) *__IOHIDDevice deviceRef;
@property (readonly) NSSet *elements; // ivar: _elements
@property (nonatomic, getter=isSuspended) BOOL suspended; // ivar: _suspended


-(id)init;
-(id)initWithHIDDevice:(id)arg0 ;
-(id)initWithIOHIDDevice:(struct __IOHIDDevice *)arg0 ;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)setBatchInputElementHandler:(id)arg0 ;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setInputElementMatching:(id)arg0 ;
-(void)setInputElements:(id)arg0 ;


@end


#endif