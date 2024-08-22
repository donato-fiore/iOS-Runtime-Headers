// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUSOURCESCHEMA_H
#define NUSOURCESCHEMA_H



#import "NUSchema.h"

@interface NUSourceSchema : NUSchema



+(id)identifier;
+(id)requiredAttributes;
+(id)supportedAttributes;
-(BOOL)serializeAssetIdentifier:(id)arg0 intoDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateSource:(id)arg0 error:(*id)arg1 ;
-(NSInteger)type;
-(id)copy:(id)arg0 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)deserializeAssetIdentifierFromDictionary:(id)arg0 error:(*id)arg1 ;
-(id)deserializeSource:(id)arg0 error:(*id)arg1 ;
-(id)identifier;
-(id)init;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)schemaDependencies;
-(id)serialize:(id)arg0 error:(*id)arg1 ;
-(id)serializeSource:(id)arg0 error:(*id)arg1 ;


@end


#endif