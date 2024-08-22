// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUNUMBERSETTING_H
#define NUNUMBERSETTING_H

@class NSNumber;


#import "NUSetting.h"

@interface NUNumberSetting : NUSetting

@property (readonly) NSNumber *defaultValue;
@property (readonly) NSNumber *identityValue;
@property (readonly) NSNumber *maximumValue; // ivar: _maximumValue
@property (readonly) NSNumber *minimumValue; // ivar: _minimumValue
@property (readonly) NSNumber *ui_maximumValue; // ivar: _ui_maximumValue
@property (readonly) NSNumber *ui_minimumValue; // ivar: _ui_minimumValue


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateNumber:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithMinimum:(id)arg0 maximum:(id)arg1 attributes:(id)arg2 ;
-(id)initWithMinimum:(id)arg0 maximum:(id)arg1 uiMinimum:(id)arg2 uiMaximum:(id)arg3 attributes:(id)arg4 ;


@end


#endif