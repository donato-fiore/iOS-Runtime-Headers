// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPINSTSCHEMACLPCURAREAPPINTENTTASKCLASSIFICATIONSTARTED_H
#define CLPINSTSCHEMACLPCURAREAPPINTENTTASKCLASSIFICATIONSTARTED_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaAsset.h"

@interface CLPInstSchemaCLPCurareAppIntentTaskClassificationStarted : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaAsset *classifierModelAsset; // ivar: _classifierModelAsset
@property (nonatomic) int classifierModelType; // ivar: _classifierModelType
@property (nonatomic) BOOL hasClassifierModelAsset; // ivar: _hasClassifierModelAsset
@property (nonatomic) BOOL hasClassifierModelType;
@property (nonatomic) BOOL hasNlv4AssetVersion; // ivar: _hasNlv4AssetVersion
@property (nonatomic) BOOL hasNlv4AssetVersionOverride; // ivar: _hasNlv4AssetVersionOverride
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion; // ivar: _nlv4AssetVersion
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride; // ivar: _nlv4AssetVersionOverride


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif