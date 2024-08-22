// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POMMESSCHEMAPOMMESREQUESTRESULT_H
#define POMMESSCHEMAPOMMESREQUESTRESULT_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESRequestResult : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasPegasusDomain; // ivar: _hasPegasusDomain
@property (nonatomic) BOOL hasPommesConfidenceScore;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *pegasusDomain; // ivar: _pegasusDomain
@property (nonatomic) CGFloat pommesConfidenceScore; // ivar: _pommesConfidenceScore


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deletePegasusDomain;
-(void)deletePommesConfidenceScore;
-(void)writeTo:(id)arg0 ;


@end


#endif