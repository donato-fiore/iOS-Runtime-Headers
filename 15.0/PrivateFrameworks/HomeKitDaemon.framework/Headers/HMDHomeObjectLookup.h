// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEOBJECTLOOKUP_H
#define HMDHOMEOBJECTLOOKUP_H



#import "HMDObjectLookup.h"
#import "HMDHome.h"

@interface HMDHomeObjectLookup : HMDObjectLookup

@property (weak) HMDHome *home; // ivar: _home


+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)logIdentifier;
-(void)_scanAccessoriesAndServices;
-(void)_scanActionSets;
-(void)_scanMediaSystems;
-(void)_scanResidentDevices;
-(void)_scanRooms;
-(void)_scanServiceGroups;
-(void)_scanSettings:(id)arg0 ;
-(void)_scanTriggers;
-(void)_scanUsers;
-(void)_scanZones;
-(void)scanObjects;


@end


#endif