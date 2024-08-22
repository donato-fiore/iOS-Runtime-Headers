// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUENUMSETTING_H
#define NUENUMSETTING_H

@class NSString, NSArray;


#import "NUSetting.h"

@interface NUEnumSetting : NUSetting

@property (readonly) NSString *defaultValue;
@property (readonly) NSString *identityValue;
@property (readonly) NSArray *values; // ivar: _values


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateValues:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithValues:(id)arg0 attributes:(id)arg1 ;


@end


#endif