// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDAUDITACCESSORYPAIRINGOPERATION_H
#define HMDAUDITACCESSORYPAIRINGOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAccessoryBackgroundOperation.h"

@interface HMDAuditAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)predicate;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)getPairingsFromAccessory:(id)arg0 ;
-(id)getPairingsFromAirPlayAccessory:(id)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryIdentifier:(id)arg1 homeUUIDWhereAccessoryWasPaired:(id)arg2 ;
-(id)logIdentifier;
-(void)auditHAPPairings:(id)arg0 forAccessory:(id)arg1 ;
-(void)scheduleAuditOperations:(id)arg0 ;


@end


#endif