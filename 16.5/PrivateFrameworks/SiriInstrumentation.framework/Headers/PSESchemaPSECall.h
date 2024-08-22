// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSESCHEMAPSECALL_H
#define PSESCHEMAPSECALL_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface PSESchemaPSECall : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) CGFloat callDurationInSeconds; // ivar: _callDurationInSeconds
@property (nonatomic) BOOL hasCallDurationInSeconds;
@property (nonatomic) BOOL hasHasUserInitiatedFollowup;
@property (nonatomic) BOOL hasUserInitiatedFollowup; // ivar: _hasUserInitiatedFollowup
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteCallDurationInSeconds;
-(void)deleteHasUserInitiatedFollowup;
-(void)writeTo:(id)arg0 ;


@end


#endif