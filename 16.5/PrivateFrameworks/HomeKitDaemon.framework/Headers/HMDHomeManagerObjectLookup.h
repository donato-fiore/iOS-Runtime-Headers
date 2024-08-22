// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEMANAGEROBJECTLOOKUP_H
#define HMDHOMEMANAGEROBJECTLOOKUP_H



#import "HMDObjectLookup.h"
#import "HMDHomeManager.h"

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager; // ivar: _homeManager


+(id)logCategory;
-(id)initWithHomeManager:(id)arg0 ;
-(void)_scanAccounts;
-(void)_scanCloudZones;
-(void)_scanHomes;
-(void)scanObjects;


@end


#endif