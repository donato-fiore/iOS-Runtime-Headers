// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYPROFILEGROUPITEMPROVIDER_H
#define HFACCESSORYPROFILEGROUPITEMPROVIDER_H

@class NSString, HMHome, NSMutableSet;
@protocol HFAccessoryProfileFiltering, HFAccessoryProfileGrouping;


#import "HFItemProvider.h"
#import "HFAccessoryProfileFilterOptions.h"
#import "HFAccessoryProfileGroupOptions.h"

@interface HFAccessoryProfileGroupItemProvider : HFItemProvider <HFAccessoryProfileFiltering, HFAccessoryProfileGrouping>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // ivar: _filterOptions
@property (retain, nonatomic) HFAccessoryProfileGroupOptions *groupOptions; // ivar: _groupOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *profileGroupItems; // ivar: _profileGroupItems
@property (readonly) Class superclass;


-(id)_profileGroupItemForProfiles:(id)arg0 groupIdentifier:(id)arg1 ;
-(id)_supportedProfileClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif