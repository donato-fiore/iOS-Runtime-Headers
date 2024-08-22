// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCOMPARISONFILTER_H
#define _HKCOMPARISONFILTER_H

@class HKFilter, NSSet, NSString;
@protocol HKComparisonFilter;



@interface _HKComparisonFilter : HKFilter <HKComparisonFilter>

 {
    atomic_flag _hasBeenConfiguredFlag;
}


@property (readonly, nonatomic) unsigned int applicationSDKVersion; // ivar: _applicationSDKVersion
@property (readonly, copy, nonatomic) NSSet *dataTypes; // ivar: _dataTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *keyPath; // ivar: _keyPath
@property (readonly, nonatomic) NSInteger keyPathIntegerValue; // ivar: _keyPathIntegerValue
@property (readonly, nonatomic) NSUInteger operatorType; // ivar: _operatorType
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id *value; // ivar: _value


+(BOOL)_isValidValue:(id)arg0 forKeyPath:(id)arg1 allowedClases:(id)arg2 error:(*id)arg3 ;
+(BOOL)allowsEmptyContainerValuesForKeyPath:(id)arg0 ;
+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg0 ;
+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(BOOL)requiresSubpredicate;
+(BOOL)supportsKeyPath:(id)arg0 forTypes:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)_filterForKeyPath:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 dataTypes:(id)arg3 applicationSDKVersion:(unsigned int)arg4 isSubpredicate:(BOOL)arg5 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
+(id)filterForKeyPath:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 dataTypes:(id)arg3 ;
+(id)filterForKeyPath:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 dataTypes:(id)arg3 isSubpredicate:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithKeyPath:(id)arg0 operatorType:(NSUInteger)arg1 value:(id)arg2 dataTypes:(id)arg3 applicationSDKVersion:(unsigned int)arg4 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)configureInMemoryFilter;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif