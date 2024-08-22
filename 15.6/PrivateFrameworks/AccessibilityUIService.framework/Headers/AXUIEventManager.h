// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIEVENTMANAGER_H
#define AXUIEVENTMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface AXUIEventManager : NSObject

@property (retain, nonatomic) NSHashTable *eventHandlers; // ivar: _eventHandlers
@property (readonly, nonatomic) BOOL laserEnabled; // ivar: _laserEnabled


+(id)sharedEventManager;
-(BOOL)_handleUIEvent:(id)arg0 ;
-(id)_init;
-(void)registerEventHandler:(id)arg0 ;
-(void)unregisterEventHandler:(id)arg0 ;


@end


#endif