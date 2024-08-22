// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEFAULTHOMESCREENITEMUPDATER_H
#define ATXDEFAULTHOMESCREENITEMUPDATER_H

@class NSSet, NSDictionary, NSUserDefaults;
@protocol OS_dispatch_queue, ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSUserDefaults *_userDefaults;
    id<ATXCategoricalHistogramProtocol> *_spotlightAppLaunchHistogram;
    id *_currentLocaleChangeToken;
}




+(id)assets;
-(BOOL)_isDayZeroExperience;
-(id)_retrieveLastUpdateDate;
-(id)initWithSpotlightAppLaunchHistogram:(id)arg0 ;
-(void)_updateDefaultsOnQueueWithReason:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
-(void)updateDefaultsIfNeededWithSystemDescriptors:(id)arg0 installDatesCache:(id)arg1 reason:(id)arg2 ;
-(void)updateDefaultsWithSystemDescriptors:(id)arg0 installDatesCache:(id)arg1 reason:(id)arg2 ;
-(void)waitForPendingAsynchronousOperations;


@end


#endif