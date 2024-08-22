// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNOISESETTINGS_H
#define HUNOISESETTINGS_H

@class NSLock, NPSDomainAccessor, NSString, NSDate, NSAttributedString, NSURL, NSArray, NSNumber, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HUNoiseSettings : NSObject {
    NSLock *_synchronizeDomainsLock;
}


@property (nonatomic) CGFloat currentLeq;
@property (retain, nonatomic) NPSDomainAccessor *domainAccessor; // ivar: _domainAccessor
@property (readonly, nonatomic) NSString *environmentalMeasurementsFooterDescription;
@property (readonly, nonatomic) NSString *environmentalMeasurementsTitleDescription;
@property (nonatomic) BOOL internalLoggingEnabled;
@property (readonly, nonatomic) NSString *launchNoiseOnboardingTitle;
@property (nonatomic) CGFloat leqDuration;
@property (retain, nonatomic) NSDate *leqTimestamp;
@property (nonatomic) BOOL migratedThreshold;
@property (nonatomic) BOOL noiseEnabled;
@property (readonly, nonatomic) NSInteger noiseThresholdCurrentValue;
@property (readonly, nonatomic) NSString *noiseThresholdFooterDescription;
@property (readonly, nonatomic) NSAttributedString *noiseThresholdFooterDescriptionWithLink;
@property (readonly, nonatomic) NSString *noiseThresholdFooterLinkTitle;
@property (readonly, nonatomic) NSURL *noiseThresholdFooterLinkURL;
@property (readonly, nonatomic) NSInteger noiseThresholdMinutesThreshold;
@property (readonly, nonatomic) NSArray *noiseThresholdOptions;
@property (readonly, nonatomic) NSString *noiseThresholdSectionTitle;
@property (readonly, nonatomic) NSString *noiseThresholdTitleDescription;
@property (readonly, nonatomic) NSString *noiseThresholdValueFooterDescription;
@property (retain, nonatomic) NSDate *notificationMuteDate;
@property (nonatomic) NSUInteger notificationThreshold;
@property (nonatomic) BOOL notificationsEnabled;
@property (retain, nonatomic) NSNumber *notificationsEnabledOverride; // ivar: _notificationsEnabledOverride
@property (retain, nonatomic) NSNumber *notificationsThreshholdOverride; // ivar: _notificationsThreshholdOverride
@property (nonatomic) BOOL onboardingCompleted;
@property (retain, nonatomic) NSMutableSet *registeredNotifications; // ivar: _registeredNotifications
@property (retain, nonatomic) NSMutableSet *synchronizePreferences; // ivar: _synchronizePreferences
@property (nonatomic) NSUInteger thresholdVersion;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks; // ivar: _updateBlocks


+(id)sharedInstance;
-(BOOL)preferenceIsSetForRetrieveSelector:(SEL)arg0 ;
-(id)_preferenceKeyForSelector:(SEL)arg0 ;
-(id)_valueForPreferenceKey:(id)arg0 ;
-(id)init;
-(id)localizedNoiseThresholdDetailValue:(NSInteger)arg0 ;
-(id)localizedNoiseThresholdValue:(NSInteger)arg0 ;
-(id)notificationForPreferenceKey:(id)arg0 ;
-(void)_handlePreferenceChanged:(id)arg0 ;
-(void)_registerForNotification:(id)arg0 ;
-(void)_setValue:(id)arg0 forPreferenceKey:(id)arg1 ;
-(void)_synchronizeIfNecessary:(id)arg0 ;
-(void)dealloc;
-(void)pairedWatchDidChange:(id)arg0 ;
// -(void)registerUpdateBlock:(id)arg0 forRetrieveSelector:(unk)arg1 withListener:(SEL)arg2  ;


@end


#endif