// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HIDEVENTSYSTEMCLIENT_H
#define HIDEVENTSYSTEMCLIENT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HIDEventSystemClient : NSObject {
    *__IOHIDEventSystemClient _client;
    id *_eventHandler;
    id *_resetHandler;
    id *_filterHandler;
    id *_serviceHandler;
    id *_propertyChangedHandler;
    id *_cancelHandler;
    BOOL _activated;
    os_unfair_recursive_lock_s _handlerLock;
}


@property (readonly) NSArray *services;


-(BOOL)setProperty:(id)arg0 forKey:(id)arg1 ;
-(id)description;
-(id)initWithType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 andAttributes:(id)arg1 ;
-(id)propertyForKey:(id)arg0 ;
-(struct __IOHIDEventSystemClient *)client;
-(void)activate;
-(void)cancel;
-(void)dealloc;
-(void)setCancelHandler:(id)arg0 ;
-(void)setDispatchQueue:(id)arg0 ;
-(void)setEventFilterHandler:(id)arg0 ;
-(void)setEventHandler:(id)arg0 ;
-(void)setMatching:(id)arg0 ;
// -(void)setPropertyChangedHandler:(id)arg0 matching:(unk)arg1  ;
-(void)setResetHandler:(id)arg0 ;
-(void)setServiceNotificationHandler:(id)arg0 ;


@end


#endif