// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANSYSTEMNOTIFICATIONOBSERVER_H
#define ANSYSTEMNOTIFICATIONOBSERVER_H


#import <Foundation/Foundation.h>


@interface ANSystemNotificationObserver : NSObject

@property (copy) id *observerHandler; // ivar: _observerHandler


+(id)observer:(id)arg0 ;
-(id)init;
-(id)initWithHandler:(id)arg0 ;
-(void)_languageDidChange;
-(void)dealloc;
-(void)removeNotificationObservers;
-(void)startObservingNotifications;


@end


#endif