// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKACTIVITYCACHECOMPARISONFILTER_H
#define _HKACTIVITYCACHECOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKActivityCacheComparisonFilter : HKComparisonFilter

@property (readonly, nonatomic) NSInteger cacheIndex; // ivar: _cacheIndex


+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
+(id)filterWithOperatorType:(NSUInteger)arg0 cacheIndex:(NSInteger)arg1 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(void)configureInMemoryFilter;


@end


#endif