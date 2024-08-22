// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RERELEVANCEENGINECONFIGURATION_H
#define RERELEVANCEENGINECONFIGURATION_H

@class NSMutableDictionary, NSURL, NSArray, NSString;
@protocol REAutomaticExportedInterface, NSCopying, NSMutableCopying, OS_dispatch_queue, RERelevanceEngineMetricsRecorder;

#import <Foundation/Foundation.h>

#import "REDataSourceLoader.h"
#import "RELocationManager.h"
#import "REFeatureSet.h"
#import "RERelevanceProviderManagerLoader.h"

@interface RERelevanceEngineConfiguration : NSObject <REAutomaticExportedInterface, NSCopying, NSMutableCopying>

 {
    NSMutableDictionary *_values;
}


@property (readonly, nonatomic) BOOL allowsDiagnosticExtension;
@property (readonly, nonatomic) BOOL allowsRemoteTraining;
@property (readonly, nonatomic) BOOL allowsUpdatingModelFile;
@property (readonly, copy, nonatomic) NSURL *baseModelFileURL;
@property (readonly, copy, nonatomic) REDataSourceLoader *dataSourceLoader;
@property (readonly, nonatomic) BOOL disableAutomaticContentManagement;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *engineQueue;
@property (readonly, nonatomic) BOOL ignoreDeviceLockState;
@property (readonly, nonatomic) BOOL ignoresInstalledApplications;
@property (readonly, copy, nonatomic) NSArray *interactionDescriptors;
@property (readonly, nonatomic) RELocationManager *locationManager;
@property (readonly, nonatomic) NSObject<RERelevanceEngineMetricsRecorder> *metricsRecorder;
@property (readonly, copy, nonatomic) NSURL *modelFileURL;
@property (readonly, nonatomic) NSUInteger modelStorageBehavior;
@property (readonly, nonatomic) NSUInteger modelVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, nonatomic) NSString *preferenceDomain;
@property (readonly, copy, nonatomic) REFeatureSet *primaryFeatures;
@property (readonly, copy, nonatomic) RERelevanceProviderManagerLoader *relevanceProviderManagerLoader;
@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) NSUInteger trainingBehavior;
@property (readonly, nonatomic) BOOL wantsBackup;
@property (readonly, nonatomic) BOOL wantsImmutableContent;
@property (readonly, copy, nonatomic) NSArray *whitelistedDataSourceClassNames; // ivar: _whitelistedDataSourceClassNames


+(id)_defaultModelFileURL;
+(id)defaultConfiguration;
+(id)defaultUpNextConfiguration;
+(id)sampleUpNextConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueForKey:(id)arg0 ofClass:(Class)arg1 defaultValue:(id)arg2 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ofClass:(Class)arg2 ;


@end


#endif