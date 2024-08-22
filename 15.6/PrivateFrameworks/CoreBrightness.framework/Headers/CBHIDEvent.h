// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBHIDEVENT_H
#define CBHIDEVENT_H

@class NSArray, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface CBHIDEvent : NSObject {
    CGFloat _sMachTimebaseFactor;
    NSObject<OS_os_log> *_logHandle;
}


@property (readonly, nonatomic) NSArray *copyChildren;
@property *__IOHIDEvent event; // ivar: _event
@property (readonly, nonatomic) unsigned int eventType;
@property *__IOHIDServiceClient service; // ivar: _service
@property (readonly, nonatomic) NSNumber *serviceRegistryID; // ivar: _serviceRegistryID
@property (readonly, nonatomic) float timestamp;


+(id)newEvent:(struct __IOHIDEvent *)arg0 andService:(struct __IOHIDServiceClient *)arg1 ;
-(float)floatValueForKey:(unsigned int)arg0 ;
-(id)initWithHIDEvent:(struct __IOHIDEvent *)arg0 andService:(struct __IOHIDServiceClient *)arg1 ;
-(int)integerValueForKey:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif