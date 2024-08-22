// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUAPPLEMUSICACCOUNTITEMPROVIDER_H
#define HUAPPLEMUSICACCOUNTITEMPROVIDER_H

@class HFItemProvider, NSMutableSet;
@protocol HFMediaProfileContainer;



@interface HUAppleMusicAccountItemProvider : HFItemProvider

@property (copy, nonatomic) id *filter; // ivar: _filter
@property (retain, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer


-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)invalidationReasons;
-(id)reloadItems;


@end


#endif