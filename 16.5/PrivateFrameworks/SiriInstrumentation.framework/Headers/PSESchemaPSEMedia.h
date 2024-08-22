// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSEMEDIA_H
#define PSESCHEMAPSEMEDIA_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"
#import "PSESchemaPSEMediaUserFollowupAction.h"

@interface PSESchemaPSEMedia : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasLastMediaUserFollowupAction; // ivar: _hasLastMediaUserFollowupAction
@property (nonatomic) BOOL hasMediaContentDurationBucket;
@property (nonatomic) BOOL hasPlayDurationInSeconds;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) PSESchemaPSEMediaUserFollowupAction *lastMediaUserFollowupAction; // ivar: _lastMediaUserFollowupAction
@property (nonatomic) int mediaContentDurationBucket; // ivar: _mediaContentDurationBucket
@property (nonatomic) CGFloat playDurationInSeconds; // ivar: _playDurationInSeconds


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteLastMediaUserFollowupAction;
-(void)deleteMediaContentDurationBucket;
-(void)deletePlayDurationInSeconds;
-(void)writeTo:(id)arg0 ;


@end


#endif