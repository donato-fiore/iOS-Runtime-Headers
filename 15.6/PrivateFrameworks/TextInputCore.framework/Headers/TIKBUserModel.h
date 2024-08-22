// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIKBUSERMODEL_H
#define TIKBUSERMODEL_H

@class TIUserModel, NSArray, NSString;
@protocol TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate;


#import "TIMetricDescriptorRegistry.h"

@interface TIKBUserModel : TIUserModel <TIKBUserModeling, TIKBMetricProviding, TIUserModelConfigurationDelegate>



@property (readonly, nonatomic) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *kbContexts;
@property (readonly, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry; // ivar: _metricDescriptorRegistry
@property (readonly) Class superclass;


+(id)userModelWithInputMode:(id)arg0 userModelDataStore:(id)arg1 ;
+(id)userModelWithInputMode:(id)arg0 userModelDataStore:(id)arg1 metricDescriptorRegistry:(id)arg2 fromDate:(id)arg3 ;
-(Class)userModelValuesClass;
-(id)dictForPowerLog;
-(id)durableCounterKeys;
-(id)initWithInputMode:(id)arg0 userModelDataStore:(id)arg1 metricDescriptorRegistry:(id)arg2 fromDate:(id)arg3 ;
-(id)settingsDictionary;
-(id)valueForMetricWithName:(id)arg0 withContext:(id)arg1 ;
-(id)valuesByBucketedWordLengthForMetricWithName:(id)arg0 withContext:(id)arg1 ;
-(void)addDescriptor:(id)arg0 toWeeklyMetricKeys:(id)arg1 ;
-(void)addMetric:(id)arg0 toWeeklyMetricKeys:(id)arg1 ;
-(void)doLoad;
-(void)sessionDidEnd:(id)arg0 aligned:(id)arg1 ;
-(void)trackPowerLogIfNecessary;


@end


#endif