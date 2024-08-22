// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUINCLUDEDCONTEXTITEM_H
#define HUINCLUDEDCONTEXTITEM_H

@class HFItem, NSNumber;
@protocol HFHomeKitObject;



@interface HUIncludedContextItem : HFItem

@property (readonly, nonatomic) NSUInteger contextType; // ivar: _contextType
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject
@property (retain, nonatomic) NSNumber *overrideHiddenState; // ivar: _overrideHiddenState
@property (retain, nonatomic) NSNumber *overridePrimaryState; // ivar: _overridePrimaryState


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithHomeKitObject:(id)arg0 contextType:(NSUInteger)arg1 ;


@end


#endif