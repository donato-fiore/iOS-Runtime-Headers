// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPOWERCONTROLLER_H
#define CAMPOWERCONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CAMPowerController : NSObject {
    uint8_t _assertionIdentifierGenerator;
}


@property (readonly, nonatomic) NSMutableDictionary *_assertionsByIdentifier; // ivar: __assertionsByIdentifier
@property (readonly, nonatomic) NSUInteger _backgroundTaskIdentifier; // ivar: __backgroundTaskIdentifier
@property (nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) BOOL _isBackgrounded; // ivar: __isBackgrounded
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_powerControllerQueue; // ivar: __powerControllerQueue
@property (nonatomic, setter=_powerControllerQueue_setPowerPressureLevel:) unsigned int _powerControllerQueue_powerPressureLevel; // ivar: __powerControllerQueue_powerPressureLevel
@property (readonly, nonatomic) int _powerPressureNotificationToken; // ivar: __powerPressureNotificationToken


-(id)description;
-(id)init;
-(unsigned int)generateAssertionIdentifier;
-(unsigned int)powerPressureLevel;
-(void)_applicationWillEnterForeground:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_endBackgroundTaskIfNeeded;
-(void)_startBackgroundTaskIfNeeded;
-(void)addAssertionForIndentifier:(unsigned int)arg0 withReason:(unsigned int)arg1 ;
-(void)dealloc;
-(void)removeAssertionForIdentifier:(unsigned int)arg0 withReason:(unsigned int)arg1 ;


@end


#endif