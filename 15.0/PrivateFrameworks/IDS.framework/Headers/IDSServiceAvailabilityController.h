// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSERVICEAVAILABILITYCONTROLLER_H
#define IDSSERVICEAVAILABILITYCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSServiceAvailabilityController : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}




+(id)sharedInstance;
-(BOOL)_isValidServiceType:(id)arg0 ;
-(BOOL)addListenerID:(id)arg0 forService:(id)arg1 ;
-(BOOL)hasListenerID:(id)arg0 forService:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg0 forService:(id)arg1 ;
-(NSInteger)availabilityForListenerID:(id)arg0 forService:(id)arg1 ;
-(id)containerForService:(id)arg0 create:(BOOL)arg1 ;
-(id)init;
-(void)_handleServiceMonitorNotification:(id)arg0 ;
-(void)_postNotificationForService:(id)arg0 availability:(NSInteger)arg1 ;
-(void)_startListeningToMonitor:(id)arg0 ;
-(void)_stopListeningToMonitor:(id)arg0 ;
-(void)dealloc;


@end


#endif