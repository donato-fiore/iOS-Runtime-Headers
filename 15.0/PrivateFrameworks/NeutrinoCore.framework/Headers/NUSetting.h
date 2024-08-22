// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUSETTING_H
#define NUSETTING_H



#import "NUModel.h"

@interface NUSetting : NUModel

@property (readonly) id *defaultValue;
@property (readonly, nonatomic) BOOL isRequired;


+(id)deserializeAttributesFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)deserializeSettingsFromDictionary:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)supportedAttributes;
-(BOOL)serializeAttributesIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)copy:(id)arg0 ;
-(id)description;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)serialize:(id)arg0 error:(*id)arg1 ;


@end


#endif