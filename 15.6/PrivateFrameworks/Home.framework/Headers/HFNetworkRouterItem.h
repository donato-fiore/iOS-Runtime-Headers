// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFNETWORKROUTERITEM_H
#define HFNETWORKROUTERITEM_H

@class NSString, HMNetworkRouterProfile;
@protocol HFAccessoryRepresentableItem, HFAccessoryRepresentable, HFHomeKitObject;


#import "HFAccessoryProfileItem.h"

@interface HFNetworkRouterItem : HFAccessoryProfileItem <HFAccessoryRepresentableItem>



@property (readonly, nonatomic) NSObject<HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMNetworkRouterProfile *profile;
@property (readonly) Class superclass;


+(id)itemWithAccessoryRepresentableObject:(id)arg0 valueSource:(id)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg0 ;


@end


#endif