// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMUTABLERELEVANCEENGINECONFIGURATION_H
#define REMUTABLERELEVANCEENGINECONFIGURATION_H

@class NSURL, NSString, NSArray;
@protocol OS_dispatch_queue, RERelevanceEngineMetricsRecorder;


#import "RERelevanceEngineConfiguration.h"
#import "REDataSourceLoader.h"
#import "RELocationManager.h"
#import "REFeatureSet.h"
#import "RERelevanceProviderManagerLoader.h"

@interface REMutableRelevanceEngineConfiguration : RERelevanceEngineConfiguration

@property (nonatomic) BOOL allowsDiagnosticExtension;
@property (nonatomic) BOOL allowsRemoteTraining;
@property (nonatomic) BOOL allowsUpdatingModelFile;
@property (copy, nonatomic) NSURL *baseModelFileURL;
@property (copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (nonatomic) BOOL disableAutomaticContentManagement;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (nonatomic) BOOL ignoreDeviceLockState;
@property (nonatomic) BOOL ignoresInstalledApplications;
@property (retain, nonatomic) RELocationManager *locationManager;
@property (retain, nonatomic) NSObject<RERelevanceEngineMetricsRecorder> *metricsRecorder;
@property (copy, nonatomic) NSURL *modelFileURL;
@property (nonatomic) NSUInteger modelStorageBehavior;
@property (nonatomic) NSUInteger modelVersion;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (copy, nonatomic) NSString *preferenceDomain;
@property (copy, nonatomic) REFeatureSet *primaryFeatures;
@property (copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (nonatomic) NSUInteger trainingBehavior;
@property (nonatomic) BOOL wantsBackup;
@property (nonatomic) BOOL wantsImmutableContent;
@property (copy, nonatomic) NSArray *whitelistedDataSourceClassNames;


+(id)defaultConfiguration;
+(id)defaultUpNextConfiguration;
+(id)sampleUpNextConfiguration;
-(NSInteger)_indexOfInteractionWithName:(id)arg0 ;
-(NSInteger)_indexOfSectionWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addInteractionWithDescriptor:(id)arg0 ;
-(void)addSectionWithDescriptor:(id)arg0 ;
-(void)insertInteractionWithDescriptor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertSectionWithDescriptor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAllInteractions;
-(void)removeAllSections;
-(void)removeInteractionAtIndex:(NSUInteger)arg0 ;
-(void)removeSectionAtIndex:(NSUInteger)arg0 ;
-(void)removeSectionWithName:(id)arg0 ;


@end


#endif