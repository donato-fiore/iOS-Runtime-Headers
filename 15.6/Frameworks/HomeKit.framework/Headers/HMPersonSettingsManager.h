// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMPERSONSETTINGSMANAGER_H
#define HMPERSONSETTINGSMANAGER_H

@class NSUUID, NSString, HMFMessageDestination;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "_HMContext.h"

@interface HMPersonSettingsManager : NSObject <HMFLogging>



@property (readonly, copy) NSUUID *UUID; // ivar: _UUID
@property (readonly) _HMContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDestination *messageDestination;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)personSettingsManagerUUIDFromHomeUUID:(id)arg0 ;
-(id)initWithContext:(id)arg0 UUID:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)logIdentifier;
-(void)_sendMessageWithName:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;
-(void)fetchClassificationNotificationsEnabledForPersonWithUUID:(id)arg0 completion:(id)arg1 ;
-(void)updateClassificationNotificationsEnabled:(BOOL)arg0 forPersonWithUUID:(id)arg1 completion:(id)arg2 ;


@end


#endif