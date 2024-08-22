// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHADMATCHINGENDED_H
#define MHSCHEMAMHADMATCHINGENDED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHAdMatchingEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int adBlockerDismissalType; // ivar: _adBlockerDismissalType
@property (nonatomic) int adBlockerSource; // ivar: _adBlockerSource
@property (copy, nonatomic) NSString *adName; // ivar: _adName
@property (nonatomic) BOOL hasAdBlockerDismissalType;
@property (nonatomic) BOOL hasAdBlockerSource;
@property (nonatomic) BOOL hasAdName; // ivar: _hasAdName
@property (nonatomic) BOOL hasShazamScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float shazamScore; // ivar: _shazamScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAdBlockerDismissalType;
-(void)deleteAdBlockerSource;
-(void)deleteAdName;
-(void)deleteShazamScore;
-(void)writeTo:(id)arg0 ;


@end


#endif