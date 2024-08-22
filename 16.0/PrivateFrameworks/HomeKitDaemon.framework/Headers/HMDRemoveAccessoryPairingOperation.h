// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDREMOVEACCESSORYPAIRINGOPERATION_H
#define HMDREMOVEACCESSORYPAIRINGOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAccessoryBackgroundOperation.h"

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *pairingIdentifierToRemove;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)predicate;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 accessoryIdentifier:(id)arg1 homeUUIDWhereAccessoryWasPaired:(id)arg2 identityToRemove:(id)arg3 userData:(id)arg4 ;
-(id)initWithAccessory:(id)arg0 identityToRemove:(id)arg1 ;
-(id)initWithAccessory:(id)arg0 identityToRemove:(id)arg1 userData:(id)arg2 ;
-(id)logIdentifier;


@end


#endif