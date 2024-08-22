// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUARRAYSETTING_H
#define NUARRAYSETTING_H



#import "NUSetting.h"

@interface NUArraySetting : NUSetting

@property (readonly) NUSetting *content; // ivar: _content


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)supportedAttributes;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)copy:(id)arg0 ;
-(id)copyArray:(id)arg0 ;
-(id)description;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithAttributes:(id)arg0 ;
-(id)initWithContent:(id)arg0 attributes:(id)arg1 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)serialize:(id)arg0 error:(*id)arg1 ;


@end


#endif