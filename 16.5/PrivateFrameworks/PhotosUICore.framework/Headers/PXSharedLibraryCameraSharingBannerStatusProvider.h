// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYCAMERASHARINGBANNERSTATUSPROVIDER_H
#define PXSHAREDLIBRARYCAMERASHARINGBANNERSTATUSPROVIDER_H

@class NSString;
@protocol PXPreferencesObserver;


#import "PXObservable.h"

@interface PXSharedLibraryCameraSharingBannerStatusProvider : PXObservable <PXPreferencesObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldShowBanner; // ivar: _shouldShowBanner
@property (readonly) Class superclass;


-(id)init;
-(void)_significantTimeChange:(id)arg0 ;
-(void)_updateShouldShowBanner;
-(void)preferencesDidChange;


@end


#endif