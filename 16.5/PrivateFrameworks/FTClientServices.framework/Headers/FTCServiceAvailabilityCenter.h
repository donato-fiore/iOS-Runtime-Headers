// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FTCSERVICEAVAILABILITYCENTER_H
#define FTCSERVICEAVAILABILITYCENTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface FTCServiceAvailabilityCenter : NSObject {
    NSMutableDictionary *_availabilityHandlers;
}




+(id)sharedInstance;
-(BOOL)_isValidServiceType:(NSInteger)arg0 ;
-(BOOL)addListenerID:(id)arg0 forService:(NSInteger)arg1 ;
-(BOOL)hasListenerID:(id)arg0 forService:(NSInteger)arg1 ;
-(BOOL)removeListenerID:(id)arg0 forService:(NSInteger)arg1 ;
-(NSInteger)availabilityForListenerID:(id)arg0 forService:(NSInteger)arg1 ;
-(id)containerForService:(NSInteger)arg0 create:(BOOL)arg1 ;
-(id)init;
-(void)_handleServiceMonitorNotification:(id)arg0 ;
-(void)_postNotificationForService:(NSInteger)arg0 availability:(NSInteger)arg1 ;
-(void)_startListeningToMonitor:(id)arg0 ;
-(void)_stopListeningToMonitor:(id)arg0 ;
-(void)dealloc;


@end


#endif