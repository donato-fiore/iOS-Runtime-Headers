// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREIDENTIFIER_H
#define BMINTELLIGENCEPLATFORMFEATURESTOREFEATUREIDENTIFIER_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMIntelligencePlatformFeatureStoreFeatureIdentifier : BMEventBase <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *feature; // ivar: _feature
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *subidentifier; // ivar: _subidentifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *view; // ivar: _view


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithView:(id)arg0 feature:(id)arg1 subidentifier:(id)arg2 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif