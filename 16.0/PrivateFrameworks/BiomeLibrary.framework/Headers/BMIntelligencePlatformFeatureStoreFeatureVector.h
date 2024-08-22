// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVECTOR_H
#define BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREVECTOR_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMIntelligencePlatformFeatureStoreFeatureVector : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *feature; // ivar: _feature
@property (nonatomic) BOOL hasVersion; // ivar: _hasVersion
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int version; // ivar: _version


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithVersion:(id)arg0 feature:(id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif