// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAASSET_H
#define SISCHEMAASSET_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaVersion.h"

@interface SISchemaAsset : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int assetLocale; // ivar: _assetLocale
@property (copy, nonatomic) NSString *assetName; // ivar: _assetName
@property (retain, nonatomic) SISchemaVersion *assetVersion; // ivar: _assetVersion
@property (nonatomic) BOOL hasAssetLocale;
@property (nonatomic) BOOL hasAssetName; // ivar: _hasAssetName
@property (nonatomic) BOOL hasAssetVersion; // ivar: _hasAssetVersion
@property (nonatomic) BOOL hasTrialNamespace; // ivar: _hasTrialNamespace
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *trialNamespace; // ivar: _trialNamespace


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif