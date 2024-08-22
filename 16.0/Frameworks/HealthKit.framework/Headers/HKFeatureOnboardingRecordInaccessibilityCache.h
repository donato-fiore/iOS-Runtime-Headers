// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFEATUREONBOARDINGRECORDINACCESSIBILITYCACHE_H
#define HKFEATUREONBOARDINGRECORDINACCESSIBILITYCACHE_H

@class NSUserDefaults, NSString;
@protocol HKFeatureOnboardingRecordFallbackProviding;

#import <Foundation/Foundation.h>


@interface HKFeatureOnboardingRecordInaccessibilityCache : NSObject <HKFeatureOnboardingRecordFallbackProviding>

 {
    NSUserDefaults *_cachingDefaults;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_cachedOnboardingRecordForFeatureIdentifier:(id)arg0 ;
-(id)fallbackOnboardingRecordForError:(id)arg0 featureIdentifier:(id)arg1 ;
-(id)initWithCachingDefaults:(id)arg0 ;
-(void)updateForRetrievedOnboardingRecord:(id)arg0 featureIdentifier:(id)arg1 ;


@end


#endif