// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUPRIMARYUSERAUTOMATICITEM_H
#define HUPRIMARYUSERAUTOMATICITEM_H

@class HFItem;
@protocol HFMediaProfileContainer;



@interface HUPrimaryUserAutomaticItem : HFItem

@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;


@end


#endif