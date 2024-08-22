// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUOPAQUESETTING_H
#define NUOPAQUESETTING_H



#import "NUSetting.h"

@interface NUOpaqueSetting : NUSetting



+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
+(id)supportedAttributes;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAttribute:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(BOOL)validatePlistCompatibility:(id)arg0 error:(*id)arg1 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)serialize:(id)arg0 error:(*id)arg1 ;


@end


#endif