// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUE_H
#define BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUE_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;


#import "BMIntelligencePlatformFeatureStoreFeatureValueBasicValue.h"

@interface BMIntelligencePlatformFeatureStoreFeatureValue : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BMIntelligencePlatformFeatureStoreFeatureValueBasicValue *value; // ivar: _value
@property (readonly, nonatomic) NSArray *value_dictionary; // ivar: _value_dictionary
@property (readonly, nonatomic) NSArray *value_sequence; // ivar: _value_sequence
@property (readonly, nonatomic) NSArray *value_sequence_shape; // ivar: _value_sequence_shape


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithValue_sequence:(id)arg0 value_sequence_shape:(id)arg1 value_dictionary:(id)arg2 value:(id)arg3 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif