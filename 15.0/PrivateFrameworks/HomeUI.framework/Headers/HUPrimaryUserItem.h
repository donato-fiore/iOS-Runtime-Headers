// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPRIMARYUSERITEM_H
#define HUPRIMARYUSERITEM_H

@class HFUserItem;
@protocol HFMediaProfileContainer;



@interface HUPrimaryUserItem : HFUserItem

@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 mediaProfileContainer:(id)arg1 user:(id)arg2 ;


@end


#endif