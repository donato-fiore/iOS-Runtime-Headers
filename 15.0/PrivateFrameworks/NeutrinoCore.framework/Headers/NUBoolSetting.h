// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUBOOLSETTING_H
#define NUBOOLSETTING_H

@class NSNumber;


#import "NUSetting.h"

@interface NUBoolSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif