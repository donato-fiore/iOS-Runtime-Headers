// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTSHARINGBACKEDREMOTESETUPBROADCASTINGPROVIDER_H
#define DMTSHARINGBACKEDREMOTESETUPBROADCASTINGPROVIDER_H

@class NSString;
@protocol DMTRemoteSetupBroadcastingProvider, DMTRemoteSetupBroadcasting;

#import <Foundation/Foundation.h>


@interface DMTSharingBackedRemoteSetupBroadcastingProvider : NSObject <DMTRemoteSetupBroadcastingProvider>



@property (readonly, nonatomic) NSObject<DMTRemoteSetupBroadcasting> *broadcaster;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif