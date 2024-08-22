// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPACCNAVPARAM_H
#define CPACCNAVPARAM_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CPAccNavParamKey.h"

@interface CPAccNavParam : NSObject

@property (retain, nonatomic) Class collectionGeneric; // ivar: _collectionGeneric
@property (nonatomic) BOOL encodeable; // ivar: _encodeable
@property (retain, nonatomic) NSArray *keys; // ivar: _keys
@property (retain, nonatomic) Class objcType; // ivar: _objcType
@property (readonly, nonatomic) CPAccNavParamKey *primaryKey;
@property (retain, nonatomic) NSString *property; // ivar: _property


+(Class)_objcTypeForUpdate:(Class)arg0 parameter:(id)arg1 ;
+(NSInteger)_accNavTypeForUpdate:(Class)arg0 parameter:(id)arg1 key:(id)arg2 ;
+(id)_encodedTypeForClass:(Class)arg0 property:(id)arg1 ;
+(id)paramWithProperty:(id)arg0 keys:(id)arg1 ;
-(id)copySettingCollectionGeneric:(Class)arg0 ;
-(id)copySettingEncodeable:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)configureTypesForUpdate:(Class)arg0 ;


@end


#endif