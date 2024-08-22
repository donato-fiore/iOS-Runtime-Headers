// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBANNERPRESENTATIONMANANGER_H
#define PKBANNERPRESENTATIONMANANGER_H

@class NSMutableOrderedSet, NSString;
@protocol PKBannerViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKBannerPresentationMananger : NSObject <PKBannerViewControllerDelegate>

 {
    NSMutableOrderedSet *_bannerModels;
    os_unfair_lock_s _lock;
    BOOL _shouldWaitToDisplayBanner;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_init;
-(id)init;
-(void)_displayBanner:(id)arg0 forDestination:(NSInteger)arg1 ;
-(void)bannerShouldBeDismissed:(id)arg0 ;
-(void)displayBanner:(id)arg0 ;


@end


#endif