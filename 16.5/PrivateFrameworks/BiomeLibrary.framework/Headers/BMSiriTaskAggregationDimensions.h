// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRITASKAGGREGATIONDIMENSIONS_H
#define BMSIRITASKAGGREGATIONDIMENSIONS_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMSiriTaskAggregationDimensions : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceType; // ivar: _deviceType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int productArea; // ivar: _productArea
@property (readonly, nonatomic) NSString *siriInputLocale; // ivar: _siriInputLocale
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *systemBuild; // ivar: _systemBuild
@property (readonly, nonatomic) NSString *systemLocale; // ivar: _systemLocale


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithProductArea:(int)arg0 siriInputLocale:(id)arg1 systemLocale:(id)arg2 countryCode:(id)arg3 deviceType:(id)arg4 systemBuild:(id)arg5 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif