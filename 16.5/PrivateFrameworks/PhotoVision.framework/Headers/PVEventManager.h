// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVEVENTMANAGER_H
#define PVEVENTMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "PVContext.h"

@interface PVEventManager : NSObject {
    NSMutableArray *_notificationListeners;
    PVContext *_context;
}




-(id)initWithContext:(id)arg0 ;
-(void)addNotificationListener:(id)arg0 ;
-(void)notifyListeners:(id)arg0 ;
-(void)publishEvent:(id)arg0 source:(id)arg1 ;
-(void)removeNotificationListener:(id)arg0 ;


@end


#endif