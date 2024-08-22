// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16NEWSSUBSCRIPTION37FLEXIBLEPAYWALLCOLLECTIONVIEWDELEGATE_H
#define _TTC16NEWSSUBSCRIPTION37FLEXIBLEPAYWALLCOLLECTIONVIEWDELEGATE_H

@protocol UICollectionViewDelegate;

#import <Foundation/Foundation.h>


@interface _TtC16NewsSubscription37FlexiblePaywallCollectionViewDelegate : NSObject <UICollectionViewDelegate>

 {
    ? viewportMonitor;
}




-(id)init;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingSupplementaryView:(id)arg1 forElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplaySupplementaryView:(id)arg1 forElementKind:(id)arg2 atIndexPath:(id)arg3 ;


@end


#endif