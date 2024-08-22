// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUTRIGGERLISTSUBHEADLINEITEM_H
#define HUTRIGGERLISTSUBHEADLINEITEM_H

@class HFItem;
@protocol HUItemMapsToView, HasRemoteAccessState;



@interface HUTriggerListSubheadlineItem : HFItem <HUItemMapsToView>



@property (readonly, nonatomic) NSObject<HasRemoteAccessState> *remoteAccessInfo; // ivar: _remoteAccessInfo


-(Class)mapsToViewClass;
-(id)_attributedDescription;
-(id)_attributedDescriptionForNoRemoteAccess;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithRemoteAccessInfo:(id)arg0 ;
-(id)resultsForRemoteAccessState:(NSUInteger)arg0 ;


@end


#endif