// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef POMMESSCHEMAPOMMESPEGASUSSEARCHQUERYAMPUSERSTATE_H
#define POMMESSCHEMAPOMMESPEGASUSSEARCHQUERYAMPUSERSTATE_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface POMMESSchemaPOMMESPegasusSearchQueryAmpUserState : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasAmpSubscriptionStatus; // ivar: _hasAmpSubscriptionStatus
@property (nonatomic) BOOL hasHasAmpSubscriptionStatus;
@property (nonatomic) BOOL hasHasItunesSubscriptionStatus;
@property (nonatomic) BOOL hasHasSharedUserId;
@property (nonatomic) BOOL hasHasUserToken;
@property (nonatomic) BOOL hasItunesSubscriptionStatus; // ivar: _hasItunesSubscriptionStatus
@property (nonatomic) BOOL hasSharedUserId; // ivar: _hasSharedUserId
@property (nonatomic) BOOL hasUserToken; // ivar: _hasUserToken
@property (readonly, nonatomic) NSData *jsonData;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteHasAmpSubscriptionStatus;
-(void)deleteHasItunesSubscriptionStatus;
-(void)deleteHasSharedUserId;
-(void)deleteHasUserToken;
-(void)writeTo:(id)arg0 ;


@end


#endif