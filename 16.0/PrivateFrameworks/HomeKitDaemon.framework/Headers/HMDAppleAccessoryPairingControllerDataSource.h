// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDAPPLEACCESSORYPAIRINGCONTROLLERDATASOURCE_H
#define HMDAPPLEACCESSORYPAIRINGCONTROLLERDATASOURCE_H

@class NSString, HAPPairingIdentity, NSArray, NSNotificationCenter;
@protocol HMDAppleAccessoryPairingControllerDataSource;


#import "HMCContextProvider.h"

@interface HMDAppleAccessoryPairingControllerDataSource : HMCContextProvider <HMDAppleAccessoryPairingControllerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HAPPairingIdentity *hh1ControllerIdentity;
@property (readonly, nonatomic) NSArray *inProgressPairingAccessories;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly) Class superclass;


-(id)initWithContext:(id)arg0 ;
-(id)timerWithInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;
-(void)deletePairingAccessoryState:(id)arg0 ;
-(void)updatePairingAccessoryState:(id)arg0 ;


@end


#endif