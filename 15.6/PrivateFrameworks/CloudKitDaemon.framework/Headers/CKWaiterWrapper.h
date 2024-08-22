// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKWAITERWRAPPER_H
#define CKWAITERWRAPPER_H

@class NSString, NSArray;
@protocol OS_os_activity, CKDZoneGatekeeperWaiter;

#import <Foundation/Foundation.h>


@interface CKWaiterWrapper : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, nonatomic) NSString *personaID; // ivar: _personaID
@property (readonly, nonatomic) id *waitCompletedHandler; // ivar: _waitCompletedHandler
@property (readonly, nonatomic) NSObject<CKDZoneGatekeeperWaiter> *waiter; // ivar: _waiter
@property (readonly, nonatomic) NSArray *zoneIDs; // ivar: _zoneIDs


-(id)CKPropertiesDescription;
-(id)description;
// -(id)initWithWaiter:(id)arg0 zoneIDs:(id)arg1 waitCompletedHandler:(id)arg2 activity:(unk)arg3  ;
-(void)invokeWaitCompletedHandler:(BOOL)arg0 ;


@end


#endif