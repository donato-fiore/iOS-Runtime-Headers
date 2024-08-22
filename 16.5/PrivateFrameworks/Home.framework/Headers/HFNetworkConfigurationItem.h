// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFNETWORKCONFIGURATIONITEM_H
#define HFNETWORKCONFIGURATIONITEM_H

@class HMNetworkConfigurationProfile;


#import "HFAccessoryProfileItem.h"

@interface HFNetworkConfigurationItem : HFAccessoryProfileItem

@property (readonly, nonatomic) HMNetworkConfigurationProfile *profile;


+(id)defaultItemComparator:(SEL)arg0 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif