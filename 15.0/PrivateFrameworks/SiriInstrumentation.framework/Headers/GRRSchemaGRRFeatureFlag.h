// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GRRSCHEMAGRRFEATUREFLAG_H
#define GRRSCHEMAGRRFEATUREFLAG_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface GRRSchemaGRRFeatureFlag : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *featureFlagKey; // ivar: _featureFlagKey
@property (nonatomic) BOOL hasFeatureFlagKey; // ivar: _hasFeatureFlagKey
@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif