// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCURATEDCHANGENOTIFICATIONS_H
#define SGCURATEDCHANGENOTIFICATIONS_H


#import <Foundation/Foundation.h>


@interface SGCuratedChangeNotifications : NSObject



+(id)_getListener:(Class)arg0 ;
+(id)_getListenerByClassMap;
// +(void)_addObserver:(id)arg0 forObjectLifetime:(unk)arg1 listenerClass:(id)arg2  ;
// +(void)addAddressBookObserver:(id)arg0 forObjectLifetime:(unk)arg1  ;
// +(void)addCalendarObserver:(id)arg0 forObjectLifetime:(unk)arg1  ;
+(void)simulateAddressBookChange;
+(void)simulateCalendarChange;


@end


#endif