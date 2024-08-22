// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUADJUSTMENTSCHEMA_H
#define NUADJUSTMENTSCHEMA_H

@class NSDictionary;


#import "NUSchema.h"

@interface NUAdjustmentSchema : NUSchema

@property (readonly, nonatomic) NSDictionary *settings; // ivar: _settings


+(id)deserializeFromDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)deserializeSettings:(id)arg0 fromDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)isValid:(*id)arg0 ;
-(BOOL)serializeIntoDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)serializeSettings:(id)arg0 intoDictionary:(id)arg1 error:(*id)arg2 ;
-(BOOL)validate:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateAdjustment:(id)arg0 error:(*id)arg1 ;
-(BOOL)validateSettings:(*id)arg0 ;
-(BOOL)validateSettings:(id)arg0 error:(*id)arg1 ;
-(NSInteger)type;
-(id)copy:(id)arg0 ;
-(id)copyAdjustment:(id)arg0 ;
-(id)deserialize:(id)arg0 error:(*id)arg1 ;
-(id)deserializeAdjustment:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 attributes:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 settings:(id)arg1 attributes:(id)arg2 ;
-(id)makeJSValue:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)modelForProperty:(id)arg0 ;
-(id)schemaDependencies;
-(id)serialize:(id)arg0 error:(*id)arg1 ;
-(id)serializeAdjustment:(id)arg0 error:(*id)arg1 ;
-(void)enumerateProperties:(id)arg0 ;


@end


#endif