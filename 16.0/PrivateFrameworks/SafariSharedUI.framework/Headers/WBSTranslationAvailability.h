// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTRANSLATIONAVAILABILITY_H
#define WBSTRANSLATIONAVAILABILITY_H

@class NSArray, NSNumber, NSString;
@protocol WBSTranslationAvailabilityProviding;

#import <Foundation/Foundation.h>


@interface WBSTranslationAvailability : NSObject <WBSTranslationAvailabilityProviding>

 {
    os_unfair_lock_s _lock;
    id<WBSTranslationAvailabilityProviding> *_availabilityProvider;
    NSArray *_cachedAvailableLocalePairs;
    BOOL _hasCheckedAvailableLocalePairs;
    NSNumber *_cachedTranslationAvailableInCurrentRegion;
    NSArray *_cachedUserPreferredLocales;
    id *_availableInCurrentRegionCompletionHandler;
    id *_availableLocalePairsCompletionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *userPreferredTargetLocales;


+(id)sharedAvailability;
-(id)_initWithAvailabilityProvider:(id)arg0 ;
-(id)init;
-(void)_didUpdateSupportedRegionAndLocalePairs;
-(void)_updateCachedValues;
-(void)getAllTargetLocalesInUserPreferredOrderWithCompletionHandler:(id)arg0 ;
-(void)getAvailableLocalePairsWithCompletionHandler:(id)arg0 ;
-(void)getTranslationAvailabilityWithCompletionHandler:(id)arg0 ;
-(void)isTranslationSupportedForCurrentRegionWithCompletionHandler:(id)arg0 ;
-(void)supportedLocalePairsWithCompletionHandler:(id)arg0 ;


@end


#endif