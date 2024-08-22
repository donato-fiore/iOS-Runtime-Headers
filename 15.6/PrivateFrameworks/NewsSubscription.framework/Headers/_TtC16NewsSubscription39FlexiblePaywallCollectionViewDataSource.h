// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16NEWSSUBSCRIPTION39FLEXIBLEPAYWALLCOLLECTIONVIEWDATASOURCE_H
#define _TTC16NEWSSUBSCRIPTION39FLEXIBLEPAYWALLCOLLECTIONVIEWDATASOURCE_H

@protocol UICollectionViewDataSource;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription39FlexiblePaywallCollectionViewDataSource : NSObject <UICollectionViewDataSource>

 {
    ? layoutProvider;
    ? feedItemRenderer;
    ? feedItemSupplementaryRenderer;
    ? delegate;
    ? subscribeButtonDebouncer;
}




-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;


@end


#endif