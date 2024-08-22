// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORESPOTLIGHTPREFERENCES_H
#define CORESPOTLIGHTPREFERENCES_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CoreSpotlightPreferences : NSObject

@property (nonatomic) char * notification_key; // ivar: _notification_key
@property (copy, nonatomic) id *notifyHandler; // ivar: _notifyHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (readonly, nonatomic) int notifyToken; // ivar: _notifyToken
@property (readonly, copy, nonatomic) id *notify_handler; // ivar: _notify_handler
@property (retain, nonatomic) NSString *state_key; // ivar: _state_key


-(BOOL)notifyStart;
-(void)dealloc;
-(void)handlePreferencesChanged;
-(void)saveState:(id)arg0 ;


@end


#endif