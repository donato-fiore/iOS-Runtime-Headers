// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUEBASICVALUE_H
#define BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVALUEBASICVALUE_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMIntelligencePlatformFeatureStoreFeatureValueBasicValue : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat double_value; // ivar: _double_value
@property (readonly, nonatomic) CGFloat float_value; // ivar: _float_value
@property (nonatomic) BOOL hasDouble_value; // ivar: _hasDouble_value
@property (nonatomic) BOOL hasFloat_value; // ivar: _hasFloat_value
@property (nonatomic) BOOL hasInt_value; // ivar: _hasInt_value
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger int_value; // ivar: _int_value
@property (readonly, nonatomic) NSString *string_value; // ivar: _string_value
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithInt_value:(id)arg0 double_value:(id)arg1 float_value:(id)arg2 string_value:(id)arg3 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif