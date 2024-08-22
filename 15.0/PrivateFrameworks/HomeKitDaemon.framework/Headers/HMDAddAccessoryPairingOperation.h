// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDADDACCESSORYPAIRINGOPERATION_H
#define HMDADDACCESSORYPAIRINGOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAccessoryBackgroundOperation.h"

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)predicate;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 newPairingIdentity:(id)arg1 asAdmin:(BOOL)arg2 shouldUpdateKeyChainEntry:(BOOL)arg3 ;
-(id)logIdentifier;
-(void)associateNewControllerKeyWithAccessory:(id)arg0 controllerKeyIdentifierToAssociate:(id)arg1 permissions:(NSUInteger)arg2 withCompletion:(id)arg3 ;


@end


#endif