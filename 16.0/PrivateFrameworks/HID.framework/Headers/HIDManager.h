// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDMANAGER_H
#define HIDMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HIDManager : NSObject {
    *__IOHIDManager _manager;
    id *_elementHandler;
    id *_deviceNotificationHandler;
    id *_inputReportHandler;
    id *_cancelHandler;
    BOOL _activated;
    os_unfair_recursive_lock_s _handlerLock;
}


@property (readonly) NSArray *devices;


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(id)propertyForKey:(id)arg0 ;
-(void)activate;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)open;
-(void)openWithOptions:(NSInteger)arg0 ;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDeviceMatching:(id)arg0 ;
-(void)setDeviceNotificationHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setInputElementHandler:(id)arg0 ;
-(void)setInputElementMatching:(id)arg0 ;
-(void)setInputReportHandler:(id)arg0 ;


@end


#endif