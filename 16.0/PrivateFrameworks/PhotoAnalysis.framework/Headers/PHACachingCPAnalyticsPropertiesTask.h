// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHACACHINGCPANALYTICSPROPERTIESTASK_H
#define PHACACHINGCPANALYTICSPROPERTIESTASK_H

@class NSString;
@protocol PHATask;

#import <Foundation/Foundation.h>


@interface PHACachingCPAnalyticsPropertiesTask : NSObject <PHATask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CGFloat period;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger version;


+(BOOL)_hasAppleMusicSubscriptionWithLoggingConnection:(id)arg0 ;
+(id)_ageRangeDescriptionFromBirthday:(id)arg0 ;
+(id)_fetchDemographicsSummaryWithLoggingConnection:(id)arg0 ;
+(id)_fetchLibrarySummaryForPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
+(id)_genderDescriptionFromGivenName:(id)arg0 ;
+(id)_meContactWithLoggingConnection:(id)arg0 ;
-(BOOL)currentPlatformIsSupported;
-(BOOL)runWithGraphManager:(id)arg0 progressReporter:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldRunWithGraphManager:(id)arg0 ;
-(id)_buildPropertyCacheForPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;


@end


#endif