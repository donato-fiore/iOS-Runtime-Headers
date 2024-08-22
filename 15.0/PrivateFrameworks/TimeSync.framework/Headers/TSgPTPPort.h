// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSGPTPPORT_H
#define TSGPTPPORT_H

@class IOKService, IOKNotificationPort, IOKInterestNotification;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSgPTPPort : NSObject {
    IOKService *_service;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    IOKInterestNotification *_terminationNotification;
    NSObject<OS_dispatch_queue> *_internalPropertyUpdateQueue;
}


@property (nonatomic) NSUInteger clockIdentifier; // ivar: _clockIdentifier
@property (nonatomic) unsigned short portNumber; // ivar: _portNumber
@property (nonatomic) int portRole; // ivar: _portRole
@property (readonly, nonatomic) int portType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue; // ivar: _propertyUpdateQueue
@property (readonly, nonatomic) IOKService *service;


+(id)diagnosticDescriptionForService:(id)arg0 withIndent:(id)arg1 ;
+(id)diagnosticInfoForService:(id)arg0 ;
+(id)gPTPPortWithService:(id)arg0 ;
-(BOOL)_commonInitWithService:(id)arg0 ;
-(BOOL)startAutomaticPropertyUpdates;
-(BOOL)stopAutomaticPropertyUpdates;
-(id)_notificationPort;
-(id)_notificationQueue;
-(id)init;
-(id)initWithMatchingDictionary:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(void)dealloc;
-(void)updateProperties;


@end


#endif