// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSPREFERENCESINTERFACE_H
#define VSPREFERENCESINTERFACE_H

@class NSDate, NSUserDefaults, NSString;

#import <Foundation/Foundation.h>


@interface VSPreferencesInterface : NSObject

@property (nonatomic) BOOL OOBNeedsToBeMeasured;
@property (retain, nonatomic) NSDate *OOBTriggeredDate;
@property (retain, nonatomic) NSUserDefaults *defaults; // ivar: _defaults
@property (readonly, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSDate *lastTTSRequestDate;
@property (nonatomic) _opaque_pthread_mutex_t lock; // ivar: _lock


+(id)defaultInstance;
+(id)dictionaryRepresentationOfVoices:(id)arg0 ;
-(id)initWithSuiteName:(id)arg0 ;
-(id)subscribedVoicesForClientID:(id)arg0 accessoryID:(id)arg1 ;
-(void)dealloc;
-(void)migrateDefaults;
-(void)removeSubscriptionsForAccessory:(id)arg0 ;
-(void)setSubscribedVoices:(id)arg0 forClientID:(id)arg1 accessoryID:(id)arg2 ;


@end


#endif