// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMPHOTOSPERSONMANAGER_H
#define HMPHOTOSPERSONMANAGER_H

@class NSString;
@protocol HMFLogging;


#import "HMPersonManager.h"

@interface HMPhotosPersonManager : HMPersonManager <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)personManagerUUIDFromUserUUID:(id)arg0 ;
-(id)initWithContext:(id)arg0 UUID:(id)arg1 ;
-(id)initWithUser:(id)arg0 ;
-(id)logIdentifier;


@end


#endif