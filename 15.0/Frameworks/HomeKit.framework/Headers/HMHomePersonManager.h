// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMHOMEPERSONMANAGER_H
#define HMHOMEPERSONMANAGER_H

@class NSString;
@protocol HMFLogging;


#import "HMPersonManager.h"

@interface HMHomePersonManager : HMPersonManager <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)personManagerUUIDFromHomeUUID:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)logIdentifier;


@end


#endif