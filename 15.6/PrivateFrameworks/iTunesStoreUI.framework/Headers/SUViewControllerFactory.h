// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUVIEWCONTROLLERFACTORY_H
#define SUVIEWCONTROLLERFACTORY_H


#import <Foundation/Foundation.h>


@interface SUViewControllerFactory : NSObject



-(id)newComposeReviewViewControllerWithCompositionURL:(id)arg0 ;
-(id)newDownloadsViewController;
-(id)newNetworkLockoutViewControllerWithSection:(id)arg0 ;
-(id)newPlaceholderViewController;
-(id)newStorePageViewControllerWithSection:(id)arg0 ;
-(id)newViewControllerForPage:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)newViewControllerForTrackList:(id)arg0 ;
-(id)newVolumeViewController;


@end


#endif