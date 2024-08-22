// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFTRIGGERITEM_H
#define HFTRIGGERITEM_H

@class NSString, HMHome, HMTrigger;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"
#import "HFServiceActionItemProvider.h"

@interface HFTriggerItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (retain, nonatomic) HFServiceActionItemProvider *serviceActionItemProvider; // ivar: _serviceActionItemProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMTrigger *trigger; // ivar: _trigger
@property (nonatomic) BOOL usesRichIconDescriptors; // ivar: _usesRichIconDescriptors


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)createRichIconDescriptors:(id)arg0 options:(id)arg1 ;
-(id)init;
-(id)initWithHome:(id)arg0 trigger:(id)arg1 ;
-(id)translateToRichIconDescriptors:(id)arg0 basedOnActionItems:(id)arg1 ;


@end


#endif