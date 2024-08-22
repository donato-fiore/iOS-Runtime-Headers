// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFFETCHEDHOMEKITOBJECTITEM_H
#define HFFETCHEDHOMEKITOBJECTITEM_H

@class NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFFetchedHomeKitObjectItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject
@property (readonly) Class superclass;


+(BOOL)alwaysPerformFullFetch;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 ;


@end


#endif