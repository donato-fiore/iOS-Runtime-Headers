// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GCHIDEVENTIOKITCLIENT_H
#define _GCHIDEVENTIOKITCLIENT_H

@class GCHIDEventSubject;



@interface _GCHIDEventIOKitClient : GCHIDEventSubject {
    *__IOHIDEventSystemClient _ioClient;
}




-(id)init;
-(id)initWithClient:(struct __IOHIDEventSystemClient *)arg0 queue:(id)arg1 ;
-(void)dealloc;


@end


#endif