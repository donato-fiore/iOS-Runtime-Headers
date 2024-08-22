// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMPORTRAITTOPIC_H
#define BMPORTRAITTOPIC_H

@class BMEventBase, NSString;
@protocol BMStoreData;



@interface BMPortraitTopic : BMEventBase <BMStoreData>



@property (readonly, nonatomic) int algorithm; // ivar: _algorithm
@property (readonly, nonatomic) int assetVersion; // ivar: _assetVersion
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat decayRate; // ivar: _decayRate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAssetVersion; // ivar: _hasAssetVersion
@property (nonatomic) BOOL hasDecayRate; // ivar: _hasDecayRate
@property (nonatomic) BOOL hasScore; // ivar: _hasScore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *osBuild; // ivar: _osBuild
@property (readonly, nonatomic) CGFloat score; // ivar: _score
@property (readonly) Class superclass;


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 algorithm:(int)arg1 decayRate:(id)arg2 score:(id)arg3 osBuild:(id)arg4 assetVersion:(id)arg5 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif