// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPACCNAVPARAMKEY_H
#define CPACCNAVPARAMKEY_H

@class NSSet, NSDimension;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CPAccNavParam.h"

@interface CPAccNavParamKey : NSObject <NSCopying>



@property (nonatomic) NSInteger accNavType; // ivar: _accNavType
@property (retain, nonatomic) NSSet *characteristics; // ivar: _characteristics
@property (retain, nonatomic) NSDimension *dimension; // ivar: _dimension
@property (nonatomic) unsigned char enumType; // ivar: _enumType
@property (readonly, nonatomic) BOOL hasCharacteristics;
@property (nonatomic) BOOL hasVariants; // ivar: _hasVariants
@property (nonatomic) BOOL isBoolValue; // ivar: _isBoolValue
@property (nonatomic) BOOL isIntegerValue; // ivar: _isIntegerValue
@property (nonatomic) BOOL isTimeIntervalValue; // ivar: _isTimeIntervalValue
@property (nonatomic) unsigned short key; // ivar: _key
@property (weak, nonatomic) CPAccNavParam *param; // ivar: _param
@property (readonly, nonatomic) id *unsetValue;


+(id)paramKey:(unsigned short)arg0 ;
-(id)copySettingAccNavType:(NSInteger)arg0 ;
-(id)copySettingDimension:(id)arg0 ;
-(id)copySettingEnumType:(unsigned char)arg0 ;
-(id)copySettingHasVariants:(BOOL)arg0 ;
-(id)copySettingIsBoolValue:(BOOL)arg0 ;
-(id)copySettingIsIntegerValue:(BOOL)arg0 ;
-(id)copySettingIsTimeIntervalValue:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif