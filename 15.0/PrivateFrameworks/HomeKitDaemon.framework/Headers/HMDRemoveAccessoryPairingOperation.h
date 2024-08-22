// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOVEACCESSORYPAIRINGOPERATION_H
#define HMDREMOVEACCESSORYPAIRINGOPERATION_H

@class NSString;
@protocol HMFLogging;


#import "HMDAccessoryBackgroundOperation.h"

@interface HMDRemoveAccessoryPairingOperation : HMDAccessoryBackgroundOperation <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)predicate;
-(BOOL)mainWithError:(*id)arg0 ;
-(id)initWithAccessory:(id)arg0 identityToRemove:(id)arg1 ;
-(id)logIdentifier;


@end


#endif