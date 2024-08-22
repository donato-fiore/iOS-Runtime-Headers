// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKOBJECTCOMPARISONFILTER_H
#define _HKOBJECTCOMPARISONFILTER_H

@class HKComparisonFilter, NSString;



@interface _HKObjectComparisonFilter : HKComparisonFilter {
    BOOL _compareForLocalDevice;
    NSString *_devicePropertyName;
    NSString *_metadataKey;
}




+(BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg0 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg0 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedDevicePropertyKey:(id)arg0 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsDataObjectComparingDeviceProperty:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithAppleWatchSource:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithContributor:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithCreationTime:(CGFloat)arg0 ;
-(BOOL)_acceptsDataObjectWithMetadata:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithSource:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithValue:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(void)_configureForKeyPathDeviceProperty;
-(void)_configureForKeyPathSource;
-(void)_configureForMetdataKeyPath;
-(void)configureInMemoryFilter;


@end


#endif