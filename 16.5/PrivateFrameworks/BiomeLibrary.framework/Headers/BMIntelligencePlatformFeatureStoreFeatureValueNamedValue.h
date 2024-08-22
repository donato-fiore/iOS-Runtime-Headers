// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUENAMEDVALUE_H
#define BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUENAMEDVALUE_H

@class BMEventBase, NSString;
@protocol BMStoreData;


#import "BMIntelligencePlatformFeatureStoreFeatureValueBasicValue.h"

@interface BMIntelligencePlatformFeatureStoreFeatureValueNamedValue : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureValueBasicValue *value; // ivar: _value


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif