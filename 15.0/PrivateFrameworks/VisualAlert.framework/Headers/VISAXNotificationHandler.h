// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VISAXNOTIFICATIONHANDLER_H
#define VISAXNOTIFICATIONHANDLER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface VISAXNotificationHandler : NSObject {
    id *_dispatcher;
    NSUInteger _observerIdentifier;
}


@property (copy, nonatomic, setter=_setDispatcher:) id *_dispatcher;
@property (retain, nonatomic, setter=_setNotificationName:) NSString *_notificationName; // ivar: _notificationName
@property (retain, nonatomic, setter=_setTarget:) id *_target; // ivar: _target
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(NSUInteger)_safelyRegisterObserver:(id)arg0 ;
+(id)_safelyGetObserverForIdentifier:(NSUInteger)arg0 ;
+(void)_safelyRemoveObserverForIdentifier:(NSUInteger)arg0 ;
-(id)_notificationTypeDescription;
-(id)description;
-(id)initWithNotificationName:(id)arg0 target:(id)arg1 dispatcher:(id)arg2 ;
// -(id)initWithNotificationName:(id)arg0 target:(id)arg1 dispatcher:(id)arg2 startObserving:(unk)arg3  ;
-(id)initWithNotificationName:(id)arg0 target:(id)arg1 handler:(SEL)arg2 ;
-(void)_handleNotificationWithName:(id)arg0 object:(*void)arg1 userInfo:(id)arg2 ;
-(void)_startObserving;
-(void)_stopObserving;
-(void)dealloc;
-(void)invalidate;
-(void)processHandler:(SEL)arg0 ;


@end


#endif