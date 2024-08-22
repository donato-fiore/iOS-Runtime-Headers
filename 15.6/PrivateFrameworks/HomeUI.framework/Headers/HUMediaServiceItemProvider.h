// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMEDIASERVICEITEMPROVIDER_H
#define HUMEDIASERVICEITEMPROVIDER_H

@class HFItemProvider, NSString, HMHome, NSMutableSet;
@protocol HFMediaServiceManagerObserver, HUMediaServiceItemProviderDelegate;



@interface HUMediaServiceItemProvider : HFItemProvider <HFMediaServiceManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUMediaServiceItemProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSMutableSet *items; // ivar: _items
@property (readonly) Class superclass;


+(id)itemComparator:(SEL)arg0 ;
-(id)_fetchMediaServicesFuture;
-(id)initWithHome:(id)arg0 delegate:(id)arg1 ;
-(id)reloadItems;
-(void)_notifyMediaServicesUpdated;
-(void)defaultMediaServiceDidUpdate:(id)arg0 ;
-(void)mediaServiceDidUpdate:(id)arg0 ;
-(void)mediaServiceRemoved:(id)arg0 ;
-(void)mediaServicesDidUpdate:(id)arg0 ;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;


@end


#endif