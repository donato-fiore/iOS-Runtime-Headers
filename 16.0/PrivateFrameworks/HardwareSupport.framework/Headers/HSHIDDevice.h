// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSHIDDEVICE_H
#define HSHIDDEVICE_H

@class NSString;
@protocol HSIOHIDDeviceInterface;

#import <Foundation/Foundation.h>


@interface HSHIDDevice : NSObject <HSIOHIDDeviceInterface>

 {
    unsigned char _reportCallbackBuffer;
    BOOL _active;
    BOOL _cancelled;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *__IOHIDDevice deviceRef; // ivar: _deviceRef
@property (copy, nonatomic) id *deviceRemovedCallback; // ivar: _deviceRemovedCallback
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *inputReportCallback; // ivar: _inputReportCallback
@property (readonly) Class superclass;


-(BOOL)_setReportWithID:(NSInteger)arg0 type:(int)arg1 data:(id)arg2 error:(*id)arg3 ;
-(BOOL)close:(*id)arg0 ;
-(BOOL)open:(*id)arg0 ;
-(BOOL)setFeatureReportWithID:(NSInteger)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)setOutputReportWithID:(NSInteger)arg0 data:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValue:(id)arg0 forProperty:(struct __CFString *)arg1 ;
-(id)featureReportWithID:(NSInteger)arg0 error:(*id)arg1 ;
-(id)initWithDeviceRef:(struct __IOHIDDevice *)arg0 ;
-(id)initWithService:(unsigned int)arg0 ;
-(id)valueForProperty:(struct __CFString *)arg0 ;
-(void)dealloc;
-(void)scheduleWithRunLoop:(struct __CFRunLoop *)arg0 mode:(struct __CFString *)arg1 ;
-(void)unscheduleFromRunLoop:(struct __CFRunLoop *)arg0 mode:(struct __CFString *)arg1 ;


@end


#endif