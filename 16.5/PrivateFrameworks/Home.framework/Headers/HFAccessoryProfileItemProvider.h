// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFACCESSORYPROFILEITEMPROVIDER_H
#define HFACCESSORYPROFILEITEMPROVIDER_H

@class NSString, HMHome, NSMutableSet;
@protocol HFAccessoryProfileFiltering;


#import "HFItemProvider.h"
#import "HFAccessoryProfileFilterOptions.h"

@interface HFAccessoryProfileItemProvider : HFItemProvider <HFAccessoryProfileFiltering>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HFAccessoryProfileFilterOptions *filterOptions; // ivar: _filterOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSMutableSet *profileItems; // ivar: _profileItems
@property (readonly) Class superclass;


-(id)_profileItemForProfile:(id)arg0 ;
-(id)_supportedProfileClasses;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif