// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFPLACEHOLDERITEM_H
#define HFPLACEHOLDERITEM_H

@class NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFPlaceholderItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHomeKitObject:(id)arg0 ;


@end


#endif