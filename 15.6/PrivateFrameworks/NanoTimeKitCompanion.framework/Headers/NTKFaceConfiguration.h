// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACECONFIGURATION_H
#define NTKFACECONFIGURATION_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTKFaceConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_complications;
    NSMutableDictionary *_editModeConfigurations;
    NSMutableDictionary *_metrics;
    NSMutableDictionary *_customData;
    NSString *_cachedDescription;
    os_unfair_lock_s _complicationsLock;
    os_unfair_lock_s _editModeConfigurationsLock;
    os_unfair_lock_s _metricsLock;
    os_unfair_lock_s _customDataLock;
    os_unfair_lock_s _cachedDescriptionLock;
    os_unfair_lock_s _descriptionLock;
}


@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL resourceDirectoryExists; // ivar: _resourceDirectoryExists


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dateMetricsKeys;
-(id)colorEditModeConfigurationWithJsonRepresentation:(id)arg0 editMode:(NSInteger)arg1 editModeMapping:(id)arg2 forDevice:(id)arg3 ;
-(id)complicationForSlot:(id)arg0 ;
-(id)complications;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customData;
-(id)customDataForKey:(id)arg0 ;
-(id)description;
-(id)editModeConfigurations;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 editModeMapping:(id)arg1 forDevice:(id)arg2 ;
-(id)metricForKey:(id)arg0 ;
-(id)metrics;
-(id)optionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)validationString;
-(void)_applyComplicationsDescription:(id)arg0 ;
-(void)_applyCustomData:(id)arg0 ;
-(void)_applyCustomizationDescription:(id)arg0 editModeMapping:(id)arg1 forDevice:(id)arg2 ;
-(void)_applyMetrics:(id)arg0 ;
-(void)_enumerateComplicationsWithBlock:(id)arg0 ;
-(void)_enumerateCustomDataWithBlock:(id)arg0 ;
-(void)_enumerateEditModeConfigurationsWithBlock:(id)arg0 ;
-(void)_invalidateDescription;
-(void)addConfigurationKeysToJSONDictionary:(id)arg0 face:(id)arg1 ;
-(void)appendCustomDataToDailySnapshotKey:(id)arg0 ;
-(void)appendEditModesToDailySnapshotKey:(id)arg0 ;
-(void)clearMetrics;
-(void)encodeWithCoder:(id)arg0 ;
-(void)incrementMetricForKey:(id)arg0 ;
-(void)setComplication:(id)arg0 forSlot:(id)arg1 ;
-(void)setCustomData:(id)arg0 forKey:(id)arg1 ;
-(void)setCustomDataFromConfiguration:(id)arg0 ;
-(void)setMetric:(id)arg0 forKey:(id)arg1 ;
-(void)setMetricsFromConfiguration:(id)arg0 ;
-(void)setOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;


@end


#endif