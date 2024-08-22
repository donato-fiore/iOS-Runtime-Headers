// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7NEWSUI226MAGAZINESECTIONSINTERACTOR_H
#define _TTC7NEWSUI226MAGAZINESECTIONSINTERACTOR_H

@protocol FCBundleSubscriptionChangeObserver;

#import <Foundation/Foundation.h>


@interface _TtC7NewsUI226MagazineSectionsInteractor : NSObject <FCBundleSubscriptionChangeObserver>

 {
    ? delegate;
    ? dataManager;
    ? magazinesBadgingCoordinator;
}




-(id)init;
-(void)bundleSubscriptionDidExpire:(id)arg0 ;
-(void)bundleSubscriptionDidSubscribe:(id)arg0 ;


@end


#endif