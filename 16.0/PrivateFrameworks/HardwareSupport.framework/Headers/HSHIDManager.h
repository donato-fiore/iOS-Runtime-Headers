// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSHIDMANAGER_H
#define HSHIDMANAGER_H

@protocol HSIOHIDManagerInterface;

#import <Foundation/Foundation.h>


@interface HSHIDManager : NSObject <HSIOHIDManagerInterface>

 {
    *__IOHIDManager _managerRef;
    BOOL _active;
    BOOL _cancelled;
}


@property (copy, nonatomic) id *deviceEnumeratedCallback; // ivar: _deviceEnumeratedCallback
@property (copy, nonatomic) id *deviceRemovedCallback; // ivar: _deviceRemovedCallback


-(BOOL)close:(*id)arg0 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(struct __CFString *)arg1 ;
-(id)devices;
-(id)init;
-(id)initWithManagerRef:(struct __IOHIDManager *)arg0 ;
-(id)valueForProperty:(struct __CFString *)arg0 ;
-(void)dealloc;
-(void)enumerateDevicesMatching:(id)arg0 ;
-(void)scheduleWithRunLoop:(struct __CFRunLoop *)arg0 mode:(struct __CFString *)arg1 ;
-(void)unscheduleFromRunLoop:(struct __CFRunLoop *)arg0 mode:(struct __CFString *)arg1 ;


@end


#endif